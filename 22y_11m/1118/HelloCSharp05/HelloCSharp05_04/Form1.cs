using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp05_03
{
    public partial class Form1 : Form
    {
    public List<string> list = new List<string>();
        public Form1()
        {
            InitializeComponent();
            int[] randNum = new int[4];
            Random random= new Random();
            //난수 생성
            for(int i = 0; i < 4; i++)
            {
                randNum[i] = random.Next(1, 100);
                //중복 제거
                for(int j = 0; j <= i; j++)
                {
                    if (randNum[i] == randNum[j] && j != i)
                    {
                        i--;
                    }
                }
            }
            button1.Text = $"{randNum[0]}";
            button2.Text = $"{randNum[1]}";
            button3.Text = $"{randNum[2]}";
            button4.Text = $"{randNum[3]}";
            button5.Text = button1.Text;
            button6.Text = button2.Text;
            button7.Text = button3.Text;
            button8.Text = button4.Text;

            button1.Click += new EventHandler(plus_click);
            button2.Click += new EventHandler(plus_click);
            button3.Click += new EventHandler(plus_click);
            button4.Click += new EventHandler(plus_click);
            button5.Click += new EventHandler(minus_click);
            button6.Click += new EventHandler(minus_click);
            button7.Click += new EventHandler(minus_click);
            button8.Click += new EventHandler(minus_click);
        }
        private void plus_click(object sender, EventArgs e)
        {
            Button btnPlus=(sender as Button);
            list.Add(btnPlus.Text);
            listhere.Text = "";
            foreach (var item in list)
            {
                listhere.Text += item + " ";
            }
        }
        private void minus_click(object sender, EventArgs e)
        {
            Button btnminus = (sender as Button);
            list.Remove(btnminus.Text);
            listhere.Text = "";
            foreach (var item in list)
            {
                listhere.Text += item + " ";
            }
        }

    }
}
