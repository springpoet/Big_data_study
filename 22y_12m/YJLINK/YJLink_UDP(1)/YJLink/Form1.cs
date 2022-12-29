using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Console;
namespace YJLink
{
    public partial class Form1 : Form
    {

        public Form1()
        {
            InitializeComponent();
        }

        //데이터 읽기
        private void button1_Click(object sender, EventArgs e)
        {
            UdpClient cli = new UdpClient();
            string address = textBox1.Text;
            string value = textBox2.Text;
            //읽기때만 쓰는 코드
            //string code = textBox3.Text;

            string msg = $"<01#RCS{address}000{value}**\r>";
            byte[] datagram = Encoding.UTF8.GetBytes(msg);

            cli.Send(datagram, datagram.Length, "127.0.0.1", 8000);
            WriteLine("[Send] 127.0.0.1:8000 로 {0} 바이트 전송", datagram.Length);

            IPEndPoint epRemote = new IPEndPoint(IPAddress.Any, 0);
            byte[] bytes = cli.Receive(ref epRemote);
            WriteLine("[Receive] {0} 로부터 {1} 바이트 수신", epRemote.ToString(), bytes.Length);

            if (bytes[6] == 49)
            {
                MessageBox.Show("On");
            }
            else
            {
                MessageBox.Show("Off");
            }
            cli.Close();
        }

        //데이터 쓰기
        private void button2_Click(object sender, EventArgs e)
        {
            UdpClient cli = new UdpClient();
            string address = textBox1.Text;
            string value = textBox2.Text;
            //읽기때만 쓰는 코드
            string code = textBox3.Text;

            string msg = $"<01#WCS{address}000{value}{code}**\r>";
            byte[] datagram = Encoding.UTF8.GetBytes(msg);

            cli.Send(datagram, datagram.Length, "127.0.0.1", 8000);
            WriteLine("[Send] 127.0.0.1:8000 로 {0} 바이트 전송", datagram.Length);

            IPEndPoint epRemote = new IPEndPoint(IPAddress.Any, 0);
            byte[] bytes = cli.Receive(ref epRemote);
            WriteLine("[Receive] {0} 로부터 {1} 바이트 수신", epRemote.ToString(), bytes.Length);

            cli.Close();
        }
    }
}
