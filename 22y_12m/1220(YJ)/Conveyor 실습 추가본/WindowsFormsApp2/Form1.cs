using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Net;
using System.Threading;
using System.Timers;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace WindowsFormsApp2
{
    public partial class Form1 : Form
    {
        public Boolean ClientCon = false;
        private TcpClient client;
        private NetworkStream mystream;
        private StreamReader myread;
        private StreamWriter mywrite;
        private int _port;
        private String _address;
        byte[] Wbyte = new byte[1024];
        byte[] Rbuff = new byte[1024];
        byte[] Rbyte = new byte[1024];
        String Message = "";
        Thread myreader;
        static System.Threading.Timer myTimer;
        //===================================
        delegate void AppendTextDelegate(Control ctrl, string s);   // 델리게이트 선언
        AppendTextDelegate _textAppender;                           // 델리게이트 변수선언
        //===================================


        public Form1()
        {

            InitializeComponent();
            _textAppender = new AppendTextDelegate(AppendText); //생성


        }
        //=============================================================

        void AppendText(Control ctrl, string s)
        {
            if (ctrl.InvokeRequired) ctrl.Invoke(_textAppender, ctrl, s);
            else
            {
                string source = ctrl.Text;
                ctrl.Text = source + Environment.NewLine + s;
            }
        }

        public int fn_port(int port)
        {
            _port = port;

            return _port;
        }
        public String fn_Add(String address)
        {
            _address = address;

            return _address;
        }
        //클라이언트 오픈
        public int fn_open()
        {
            int ret = 0;
            if (!ClientCon)
            {
                ret = fn_Connection();
                fnTimerCall_Start();
            }
            else
            {
                fn_Disconnection();
                ret = -1;
            }
            return ret;
        }
        //클라이언트 연결함수
        public int fn_Connection()
        {
            int ret = 0;
            try
            {
                client = new TcpClient(_address, _port);

                mystream = client.GetStream();
                myread = new StreamReader(mystream);
                mywrite = new StreamWriter(mystream);

                myreader = new Thread(fn_Receive);
                myreader.Start();

                ClientCon = true;

            }
            catch
            {
                ClientCon = false;
                ret = -2;
            }
            return ret;
        }
        //클라이언트 종료함수
        public int fn_Disconnection()
        {
            int ret = 0;
            this.ClientCon = false;
            try
            {
                Thread.Sleep(1);
                if (myread != null) myread.Close();
                if (mywrite != null) mywrite.Close();
                if (mystream != null) mystream.Close();
                if (client != null) client.Close();

                //스레드 완전종료
                myreader.Abort();


            }
            catch
            {
                ret = -2;
            }
            return ret;
        }
        //보내기 버튼
        private void button1_Click(object sender, EventArgs e)
        {
            //보내기 함수
            Thread.Sleep(3);
            txtSend.Text.ToString();
            Thread.Sleep(3);
            if (txtSend.TextLength > 0)
            {
                fn_send();
            }
        }
        //메시지 보내는함수
        public int fn_send()
        {
            int iret = 0;

            String msg = txtSend.Text.ToString();
            byte[] Wbuff = Encoding.ASCII.GetBytes(msg);
            mystream = client.GetStream();
            mystream.Write(Wbuff, 0, Wbuff.Length);
            mystream.Flush();
            AppendText(textBox4, "보낸시간" + " : " + DateTime.Now.ToString() + Environment.NewLine);
            AppendText(textBox4, "메시지 송신" + " :" + msg + Environment.NewLine);
            return iret;
        }
        //메시지 받는함수
        public void fn_Receive()
        {
            //int iret = 0;
            while (ClientCon)
            {
                if (mystream.CanRead)
                {
                    //iret = myread.BaseStream.Read(Rbyte, 0, Rbyte.Length);
                    String myreader = myread.ReadLine();
                    byte[] Rbuff = Encoding.ASCII.GetBytes(myreader);
                    if (Rbuff.Length > 0)
                    {

                        //textBox4.AppendText("도착시간" + " : "+DateTime.Now.ToString() + Environment.NewLine);
                        //textBox4.AppendText("메시지 수신" + " :" + myreader + Environment.NewLine);
                        AppendText(textBox4, "도착시간" + " : " + DateTime.Now.ToString() + Environment.NewLine);
                        AppendText(textBox4, "메시지 수신" + " :" + myreader + Environment.NewLine);
                    }
                    else
                    {
                        textBox4.AppendText("수신불가");
                    }

                }
            }

        }
        //쓰레드 타이머 - 주기적으로 통신을 하기위함
        //메시지 보내기 쓰레드 타이머
        public void fnTimerCall_Start()
        {
            myTimer = new System.Threading.Timer(fn_Callback, null, 2000, 1000); //2초후부터 1초단위로 호출
        }
        public void fn_Callback(object o)
        {
            if (ClientCon)
            {

                fn_send();
            }


        }
        //쓰레드 타이머 종료
        public void fnTimerCall_Stop()
        {
            myTimer.Dispose();
        }
        private void button2_Click(object sender, EventArgs e)
        {

        }
        //서버연결 버튼
        private void button3_Click(object sender, EventArgs e)
        {

            //입력한 주소를 받아옴
            fn_Add(txtAddress.Text);
            //입력한 아이피를 받아옴
            fn_port(int.Parse(txtPort.Text.ToString()));
            //클라이언트 오픈함수(ClientConnection)
            fn_open();
            //메시지 받기
            //fn_Receive();
            //아이피 받아오기
            if (mystream.CanRead)
            {
                Socket socket = client.Client;
                IPEndPoint ip_p = (IPEndPoint)socket.RemoteEndPoint;
                String ip = ip_p.Address.ToString();

                //if (socket != null) socket.Close();
                textBox4.AppendText(ip + Environment.NewLine);

                for (int i = 0; i < 100000000; i++)
                {
                }
                Message = "서버에 연결하였습니다";
                AppendText(textBox4, DateTime.Now.ToString() + " " + Environment.NewLine);
                AppendText(textBox4, Message + Environment.NewLine);
                AppendText(textBox4, " " + Environment.NewLine);
            }
            else
            {
                Message = "서버 연결 실패";
                textBox4.AppendText(Message + Environment.NewLine);

            }
        }

        //서버연결끊기버튼
        private void button2_Click_1(object sender, EventArgs e)
        {
            if (ClientCon)
            {

                fn_Disconnection();
                Message = "연결을 끊었습니다";
                textBox4.AppendText(DateTime.Now.ToString() + " " + Environment.NewLine);
                for (int i = 0; i < 100000000; i++)
                {

                }
                textBox4.AppendText(Message + Environment.NewLine);
            }
            else
            {
                Message = "계속 연결 중";
                textBox4.AppendText(Message);
            }

        }

    }
}