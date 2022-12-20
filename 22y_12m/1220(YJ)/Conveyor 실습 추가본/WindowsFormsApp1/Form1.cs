using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;  // 추가
using System.Net; // 추가
using System.Net.Sockets;  // 추가
using System.IO;  // 추가
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

//checkalive 는 없어도 됨. 확인하는 작업이기 때문에
//upstream 기준으로 작성
namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        static private List<string> m_logMsg = new List<string>();
        Thread thread1;
        MachineInfo machineInfo = new MachineInfo();
        BoardInfo boardInfo = new BoardInfo();
        NotificationCode enumNoti = new NotificationCode();
        Severity enumSev = new Severity();
        Notification structNoti = new Notification();
        TcpClient tcpClient1 = new TcpClient(); 

        public Form1()
        {
            InitializeComponent();
            textBox1.Text = "127.0.0.1";
            textBox2.Text = "50101";
        }

        StreamReader streamReader;  // 데이타 읽기 위한 스트림리더
        StreamWriter streamWriter;  // 데이타 쓰기 위한 스트림라이터 

        private void Conn_BTN_Click(object sender, EventArgs e)
        {
            thread1 = new Thread(connect);  // Thread 객채 생성, Form과는 별도 쓰레드에서 connect 함수가 실행됨.
            //thread1.IsBackground = true;  // Form이 종료되면 thread1도 종료.
            thread1.Start();  // thread1 시작. 
        }

        private void Disconn_BTN_Click(object sender, EventArgs e)
        {
            thread1 = new Thread(disconnect);
        }

        private void ServiceDesc_BTN_Click(object sender, EventArgs e)
        {
            streamWriter.WriteLine(MakeHermesMessage.GetServiceDesc(machineInfo));
            Console.WriteLine(MakeHermesMessage.GetServiceDesc(machineInfo));
        }
        private void MachineReady_BTN_Click(object sender, EventArgs e)
        {

            streamWriter.WriteLine(MakeHermesMessage.GetMachineReady(boardInfo.m_forecastId, boardInfo));
            Console.WriteLine(MakeHermesMessage.GetMachineReady(boardInfo.m_forecastId, boardInfo));
        }
        private void RevokeMachine_BTN_Click(object sender, EventArgs e)
        {
            streamWriter.WriteLine(MakeHermesMessage.GetRevokeMachineReady());
            Console.WriteLine(MakeHermesMessage.GetRevokeMachineReady());
        }

        private void StartTrans_BTN_Click(object sender, EventArgs e)
        {
            streamWriter.WriteLine(MakeHermesMessage.GetStartTransport(boardInfo.m_boardId));
            Console.WriteLine(MakeHermesMessage.GetStartTransport(boardInfo.m_boardId));
        }

        private void StopTrans_BTN_Click(object sender, EventArgs e)
        {
            //streamReader.ReadLine(MakeHermesMessage.GetBoardAvailable(boardInfo,true,""));
            streamWriter.WriteLine(MakeHermesMessage.GetStopTrasnport(boardInfo.m_transferState, boardInfo.m_boardId));
            Console.WriteLine(MakeHermesMessage.GetStopTrasnport(boardInfo.m_transferState, boardInfo.m_boardId));
        }

        private void Reset_BTN_Click(object sender, EventArgs e)
        {
            //ServiceDesc_BTN으로 넘어가야함
        }

        private void NotiData_BTN_Click(object sender, EventArgs e)
        {

            streamWriter.WriteLine(MakeHermesMessage.GetNotification(enumNoti, enumSev, structNoti.m_desc));
            Console.WriteLine(MakeHermesMessage.GetNotification(enumNoti, enumSev, structNoti.m_desc));
        }

        private void connect()  // thread1에 연결된 함수. 메인폼과는 별도로 동작한다.
        {
            IPEndPoint ipEnd = new IPEndPoint(IPAddress.Parse(textBox1.Text), int.Parse(textBox2.Text));  // IP주소와 Port번호를 할당
            bool status = false;
            if (status == false)
            {
                tcpClient1.Connect(ipEnd);  // 서버에 연결 요청
                writeRichTextbox("서버 연결됨...");

                streamReader = new StreamReader(tcpClient1.GetStream());  // 읽기 스트림 연결
                streamWriter = new StreamWriter(tcpClient1.GetStream());  // 쓰기 스트림 연결
                streamWriter.AutoFlush = true;  // 쓰기 버퍼 자동으로 뭔가 처리..

                while (tcpClient1.Connected)  // 클라이언트가 연결되어 있는 동안
                {
                    string receiveData1 = streamReader.ReadLine();  // 수신 데이타를 읽어서 receiveData1 변수에 저장
                    writeRichTextbox(receiveData1);  // 데이타를 수신창에 쓰기
                }

                status = true;
            }
            else
            {
                tcpClient1.Close();
            }

        }

        private void disconnect()
        {
            IPEndPoint ipEnd = new IPEndPoint(IPAddress.Parse(textBox1.Text), int.Parse(textBox2.Text));
            tcpClient1.Close();
            writeRichTextbox("서버 연결 종료...");
        }

        private void writeRichTextbox(string data)  // richTextbox1 에 쓰기 함수
        {
            richTextBox1.Invoke((MethodInvoker)delegate { richTextBox1.AppendText(data + "\r\n"); }); //  데이타를 수신창에 표시, 반드시 invoke 사용. 충돌피함.
            richTextBox1.Invoke((MethodInvoker)delegate { richTextBox1.ScrollToCaret(); });  // 스크롤을 젤 밑으로.
        }
    }
}