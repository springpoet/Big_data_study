using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Console;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Thread t = new Thread(conveyorControl);
            t.Start();

        }
        private int readValue(string code, string addr)
        {
            UdpClient cli = new UdpClient();

            string msg = $"<01#RCS{code}000{addr}**\r";
            byte[] datagram = Encoding.UTF8.GetBytes(msg);

            // (2) 데이타 송신
            cli.Send(datagram, datagram.Length, "127.0.0.1", 8000);

            // (3) 데이타 수신
            IPEndPoint epRemote = new IPEndPoint(IPAddress.Any, 0);
            byte[] bytes = cli.Receive(ref epRemote);

            // (4) UdpClient 객체 닫기
            cli.Close();

            return bytes[6] - '0';

        }
        private void setValue(string code, string addr, int val)
        {
            UdpClient cli = new UdpClient();
            //<01#RCSX000A**Cr


            string msg = $"<01#WCS{code}000{addr}{val}**\r";
            byte[] datagram = Encoding.UTF8.GetBytes(msg);

            // (2) 데이타 송신
            cli.Send(datagram, datagram.Length, "127.0.0.1", 8000);

            // (3) 데이타 수신
            IPEndPoint epRemote = new IPEndPoint(IPAddress.Any, 0);
            byte[] bytes = cli.Receive(ref epRemote);

            // (4) UdpClient 객체 닫기
            cli.Close();
        }
        private void conveyorControl()
        {
            int stepNum = 1000;
            while (true)
            {
                switch (stepNum)
                {
                    case 100: //입구 센서
                        if (1 == readValue("R", "0")) //R의 0번 = 입구 센서
                        {
                            stepNum = 300;
                            break;
                        }
                        break;
                    case 300:
                        setValue("X", "0", 1); //X의 0번 = 컨베이어. X의 0이 1 되면 컨베이어가 구른다.
                        stepNum = 400;
                        break;
                    case 400:
                        if (1 == readValue("R", "1")) //R의 1번 = 도착 센서
                        {
                            stepNum = 500;
                            break;
                        }
                        break;
                    case 500:
                        setValue("X", "0", 0); //X의 0번 = 컨베이어. X의 0이 0 되면 면 컨베이어 멈춤
                        stepNum = 600;
                        break;
                    case 600:
                        Thread.Sleep(1000);
                        stepNum = 800;
                        break;
                    case 800:
                        setValue("X", "0", 1); //X의 0번 = 컨베이어. X의 0이 1 되면 컨베이어가 구른다.
                        stepNum = 900;
                        break;
                    case 900:
                        if (1 != readValue("R", "1")) //R의 1번 = 도착 센서
                        {
                            Thread.Sleep(1000); //시간 지연
                            stepNum = 1000;
                        }
                        break;
                    case 1000:
                        setValue("X", "0", 0); //X의 0번 = 컨베이어. X의 0이 1 되면 컨베이어가 멈춘다.
                        stepNum = 100;
                        break;

                    default:
                        break;
                }
            }
        }

        private void button_read_Click(object sender, EventArgs e)
        {
            UdpClient cli = new UdpClient();
            //<01#RCSX000A**Cr

            string add = textBox_addr.Text;
            string val = textBox_data.Text;
            string code = textBox_code.Text;

            string msg = $"<01#RCS{code}000{add}**\r";
            byte[] datagram = Encoding.UTF8.GetBytes(msg);

            // (2) 데이타 송신
            cli.Send(datagram, datagram.Length, "127.0.0.1", 8000);
            WriteLine("[Send] 127.0.0.1:8000 로 {0} 바이트 전송", datagram.Length);

            // (3) 데이타 수신
            IPEndPoint epRemote = new IPEndPoint(IPAddress.Any, 0);
            byte[] bytes = cli.Receive(ref epRemote);
            WriteLine("[Receive] {0} 로부터 {1} 바이트 수신", epRemote.ToString(), bytes.Length);
            //WriteLine(bytes[0]);

            if(bytes.Length!=10)
            {
                MessageBox.Show("error");
                return;
            }

            if (bytes[6] == '1')
                MessageBox.Show("ON");
            else
                MessageBox.Show("OFF");


            // (4) UdpClient 객체 닫기
            cli.Close();
        }

        private void button_write_Click(object sender, EventArgs e)
        {
            UdpClient cli = new UdpClient();
            //<01#RCSX000A**Cr

            string add = textBox_addr.Text;
            string val = textBox_data.Text;
            string code = textBox_code.Text;
            
            string msg = $"<01#WCS{code}000{add}{val}**\r";
            byte[] datagram = Encoding.UTF8.GetBytes(msg);

            // (2) 데이타 송신
            cli.Send(datagram, datagram.Length, "127.0.0.1", 8000);
            WriteLine("[Send] 127.0.0.1:8000 로 {0} 바이트 전송", datagram.Length);

            // (3) 데이타 수신
            IPEndPoint epRemote = new IPEndPoint(IPAddress.Any, 0);
            byte[] bytes = cli.Receive(ref epRemote);
            WriteLine("[Receive] {0} 로부터 {1} 바이트 수신", epRemote.ToString(), bytes.Length);

            // (4) UdpClient 객체 닫기
            cli.Close();
        }
    }
}
