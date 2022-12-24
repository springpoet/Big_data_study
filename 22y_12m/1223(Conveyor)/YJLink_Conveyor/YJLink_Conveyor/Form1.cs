using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Security.Cryptography;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.StartPanel;
using static System.Console;

namespace YJLink_Conveyor
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Thread thread = new Thread(conveyorWork);
            thread.Start();
        }

        private int readFuncion(string type, string address)
        {
            UdpClient udpClient = new UdpClient();

            string msg = $"<01#RCS{type}000{address}**\r";
            byte[] datagram = Encoding.UTF8.GetBytes(msg);

            udpClient.Send(datagram, datagram.Length, "127.0.0.1", 8000);

            IPEndPoint epRemote = new IPEndPoint(IPAddress.Any, 0);
            byte[] bytes = udpClient.Receive(ref epRemote);

            udpClient.Close();

            return bytes[6] - '0';
        }
        private void writeFuncion(string type, string address, string onoff)
        {
            UdpClient udpClient = new UdpClient();

            string msg = $"<01#WCS{type}000{address}{onoff}**\r";
            byte[] datagram = Encoding.UTF8.GetBytes(msg);

            udpClient.Send(datagram, datagram.Length, "127.0.0.1", 8000);

            IPEndPoint epRemote = new IPEndPoint(IPAddress.Any, 0);
            byte[] bytes = udpClient.Receive(ref epRemote);

            udpClient.Close();
        }

        private void conveyorWork()
        {
            int stepNum = 100;
            int count=0;
           
                switch (stepNum)
                {
                    case 100:
                        if (1==readFuncion("R", "0"))
                        {
                            stepNum = 300;
                            break;
                        }
                        break;
                    case 300:
                        writeFuncion("X", "0", "1");
                        stepNum = 400;
                        break;
                    case 400:
                        if (1==readFuncion("R", "1"))
                        {
                            stepNum = 500;
                            break;
                        }
                        break;
                    case 500:
                        writeFuncion("X", "0", "0");
                        stepNum = 600;
                        break;
                    case 600:
                        Thread.Sleep(1000);
                        stepNum = 800;
                        break;
                    case 800:
                        writeFuncion("X", "0", "1");
                        stepNum = 900;
                        break;
                    case 900:
                        if (1 !=readFuncion("R", "1") )
                        {
                            Thread.Sleep(1000);
                            stepNum = 1000;
                            break;
                        }
                        break;
                    case 1000:
                        writeFuncion("X", "0", "0");
                        count++;
                        break;
                    default:
                        break;
                }
                
            
        }

        private void read_BTN_Click(object sender, EventArgs e)
        {
            UdpClient udpClient=new UdpClient();
            string type = textBox1.Text;
            string address = textBox2.Text;

            string msg = $"<01#RCS{type}000{address}**\r";
            byte[] datagram = Encoding.UTF8.GetBytes(msg);

            udpClient.Send(datagram, datagram.Length, "127.0.0.1", 8000);
            WriteLine("[Send] 127.0.0.1:8000 로 {0} 바이트 전송", datagram.Length);

            IPEndPoint epRemote = new IPEndPoint(IPAddress.Any, 0);
            byte[] bytes = udpClient.Receive(ref epRemote);
            WriteLine("[Receive] {0} 로부터 {1} 바이트 수신", epRemote.ToString(), bytes.Length);

            if (bytes.Length != 10) 
            {
                MessageBox.Show("Error");
            }
            if (bytes[6] == '1')
            {
                MessageBox.Show("ON");
            }
            else
            {
                MessageBox.Show("OFF");
            }
            udpClient.Close();
        }

        private void write_BTN_Click(object sender, EventArgs e)
        {
            UdpClient udpClient = new UdpClient();
            string type= textBox1.Text;
            string address= textBox2.Text;
            int onoff = int.Parse(textBox3.Text);

            string msg = $"<01#WCS{type}000{address}{onoff}**\r";
            byte[] datagram = Encoding.UTF8.GetBytes(msg);

            udpClient.Send(datagram, datagram.Length, "127.0.0.1", 8000);
            WriteLine("[Send] 127.0.0.1:8000 로 {0} 바이트 전송", datagram.Length);


            IPEndPoint epRemote = new IPEndPoint(IPAddress.Any, 0);
            byte[] bytes = udpClient.Receive(ref epRemote);
            WriteLine("[Receive] {0} 로부터 {1} 바이트 수신", epRemote.ToString(), bytes.Length);

            udpClient.Close();
        }
    }
}
