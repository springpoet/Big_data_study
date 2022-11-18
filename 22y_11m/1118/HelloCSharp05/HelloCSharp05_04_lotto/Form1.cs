using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp05_04_lotto
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Random random = new Random();
            int[] lotto = new int[7];
            for (int i = 0; i < 7; i++)
            {
                lotto[i] = random.Next(1, 46);
                for (int j = 0; j <= i; j++)
                {
                    if (lotto[i] == lotto[j] && i != j)
                    {
                        i--;
                    }
                }
            }
            //끝 번호는 추첨이라 제외하고 0부터 6개만 오름차순 정렬
            Array.Sort(lotto, 0, 6);
            for (int i = 0; i < lotto.Length; i++)
            {
                Console.Write(lotto[i] + " ");
            }
            label1.Text = lotto[0].ToString();
            label2.Text = lotto[1].ToString();
            label3.Text = lotto[2].ToString();
            label4.Text = lotto[3].ToString();
            label5.Text = lotto[4].ToString();
            label6.Text = lotto[5].ToString();
            label7.Text = lotto[6].ToString();
        }
    }
}
