using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp05_01
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //숫자 10개 저장하는 방법
            //1. 배열
            int[] numbers1 = new int[10];
            for(int i = 0; i < 10; i++)
            {
                numbers1[i] = i;
            }
            foreach (var item in numbers1)
            {
                Console.WriteLine(item);
            }

            //2. List
            List<int> numbers2 = new List<int>();
            for(int i = 0; i < 10; i++)
            {
                numbers2.Add(i*i);
            }
            foreach (var item in numbers2)
            {
                Console.WriteLine(item);
            }

            //List의 길이는 Count로 표시
            for(int i = 0; i < numbers2.Count; i++)
            {
                Console.WriteLine(numbers2[i]);
            }
            //배열의 길이는 Length로 표시
            for(int i = 0; i < numbers1.Length; i++)
            {
                Console.WriteLine(numbers1[i]);
            }
        }
    }
}
