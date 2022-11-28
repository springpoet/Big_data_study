using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp11
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            //람다 사용. 키가 엔터일 경우 button1을 눌러준다.
            textBox1.KeyUp += (sesnder, e) =>
            {
                if (e.KeyCode == Keys.Enter)
                    button1.PerformClick();
            };
        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<Locale> locales = KakaoAPI.Search(textBox1.Text);
            listBox1.Items.Clear();
            foreach (Locale item in locales)
            {
                listBox1.Items.Add(item);
            }
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listBox1.SelectedIndex == -1)
                return;

            Locale ml = listBox1.SelectedItem as Locale; //선택한 것을 Locale로 변환
            object[] pos = new object[] { ml.Lat, ml.Lng };
            HtmlDocument hdoc = webBrowser1.Document;
            hdoc.InvokeScript("setCenter", pos);
        }
    }
}
