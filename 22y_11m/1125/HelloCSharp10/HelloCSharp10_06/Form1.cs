using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;

namespace HelloCSharp10_06
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string url = "http://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=11500611500";
            XElement x = XElement.Load(url);
            Console.WriteLine(x);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            string url = "http://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=11500611500";
            XElement x = XElement.Load(url);
            var xq = from item in x.Descendants("data") select item;
            foreach (var item in xq)
            {
                Console.WriteLine(item.Element("hour").Value);
                Console.WriteLine(item.Element("wfKor").Value);
                Console.WriteLine(item.Element("wfEn").Value);
                Console.WriteLine(item.Element("temp").Value);
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            string url = "http://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=11500611500";
            XElement x = XElement.Load(url);
            var xq = from item in x.Descendants("data") select new
            {
                hour= item.Element("hour").Value,
                wf= item.Element("wfKor").Value,
                temp= item.Element("temp").Value
            };
            foreach (var item in xq)
            {
                Console.WriteLine(item.hour);
                Console.WriteLine(item.wf);
                Console.WriteLine(item.temp);
            }

        }

        private void button4_Click(object sender, EventArgs e)
        {
            string url = "http://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=11500611500";
            XElement x = XElement.Load(url);
            var xq = from item in x.Descendants("data")
                     select new Weather()
                     {
                         hour = int.Parse(item.Element("hour").Value),
                         wf = item.Element("wfKor").Value.ToString(),
                         temp = double.Parse(item.Element("temp").Value)
                     };
            
            List<Weather> w = xq.ToList<Weather>();
            foreach (var item in xq)
            {
                Console.WriteLine(item.hour);
                Console.WriteLine(item.wf);
                Console.WriteLine(item.temp);
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            string url = "http://www.kma.go.kr/wid/queryDFSRSS.jsp?zone=11500611500";
            XElement x = XElement.Load(url);
            var xq = from item in x.Descendants("data")
                     select new Weather()
                     {
                         hour = int.Parse(item.Element("hour").Value),
                         wf = item.Element("wfKor").Value.ToString(),
                         temp = double.Parse(item.Element("temp").Value)
                     };
            List<Weather> w = xq.ToList<Weather>();
            dataGridView1.DataSource = null;
            dataGridView1.DataSource = w;
            //바인딩 할 떄 코드
            /*foreach (var item in xq)
            {
                weatherBindingSource.Add(item);
            }*/
        }
    }
}
