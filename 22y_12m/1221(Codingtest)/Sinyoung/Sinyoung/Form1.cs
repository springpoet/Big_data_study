using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Sinyoung
{
    public partial class Form1 : Form
    {
        public int[] n_Data = new int[10];
        public int n_index = 0;

        public Form1()
        {
            InitializeComponent();
            this.textBox1.KeyDown += textbox1_KeyDown;
        }

        private void textbox1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                this.button1_Click(sender,e);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (n_index != 10)
            {
                n_Data[n_index] = Convert.ToInt32(textBox1.Text);
                textBox1.Text = "";
                n_index++;

                display_Data();
            }
            else
            {
                n_index = 0;
            }
        }

        private void display_Data()
        {
            richTextBox1.Text = "";

            for (int i = 0; i <= n_index - 1; i++)
            {
                for(int j=0;j<=n_index - 1; j++)
                {
                    for(int k = j+1; k < n_index; k++)
                    {
                        if (n_Data[k] < n_Data[j])
                        {
                            int temp = n_Data[j];
                            n_Data[j] = n_Data[k];
                            n_Data[k] = temp;
                        }
                    }
                }
                richTextBox1.Text += n_Data[i].ToString() + "\r\n";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            n_index = 0;
            richTextBox1.Text = "";
            textBox1.Text = "";
        }

        //현재 배열 보여주기
        private void button3_Click(object sender, EventArgs e)
        {
            label1.Text = "";
            for(int i=0;i<=n_index - 1; i++)
            {
                label1.Text += $"{n_Data[i]} ";
            }
            /*foreach (var item in n_Data)
            {
                label1.Text += $"{item} ";
            }*/
        }
    }
}