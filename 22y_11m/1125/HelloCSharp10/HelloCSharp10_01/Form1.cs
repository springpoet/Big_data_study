using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp10_01
{
    public delegate void voidFunc();
    public delegate int IntegerFunc();
    public delegate void ParameterFunc(int i);
    public delegate int IntegerParaFunc(int i);

    public partial class Form1 : Form
    {
        public int power(int num)
        {
            return num * num;
        }
        public void executeFunc(IntegerParaFunc i,int num)
        {
            MessageBox.Show($"'{num}' square num : "+i(num));
        }
        public void yourTest()
        {
            MessageBox.Show("This is yourTest.");
        }
        public void myTest()
        {
            MessageBox.Show("This is myTest.");
        }
        public void executeFunc(voidFunc v, int c)
        {
            for(int i = 0; i < c; i++)
            {
                v();
            }
        }

        List<Product> products = new List<Product>();


        public Form1()
        {
            InitializeComponent();

            products.Add(new Product() { Id = 5, Name = "감자", Price = 100 });
            products.Add(new Product() { Id = 1, Name = "돌", Price = 50 });
            products.Add(new Product() { Id = 3, Name = "칫솔살균기", Price = 0 });

            button4.Click += (s, e) => { MessageBox.Show("button 4 click event"); };
            button4.Click += delegate (object s, EventArgs e)
            {
                MessageBox.Show((s as Button).Text);
            };
            button4.Click += button1_Click;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            executeFunc(myTest, 2);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //함수인데 이름이 없다.
            //한 군데에서만 쓸거면 함수를 만들 필요가 없다.
            executeFunc(delegate ()
            {
                MessageBox.Show("This is unNamed function.");
            }, 3);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            //람다 : 무명 델리게이트를 더 줄인 형태.
            //한 번 밖에 안 쓰거나 임시로 쓰는 함수 쓸 때 이렇게 함
            executeFunc(() => { MessageBox.Show("unNamed fucntion short ver."); }, 4);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            executeFunc(power, 10);//100출력
            voidFunc myvoid = yourTest;
            myvoid();//yourTest를 호출
        }

        private void button6_Click(object sender, EventArgs e)
        {
            executeFunc(delegate (int n) { return n * n * n; }, 5);
        }

        private void button7_Click(object sender, EventArgs e)
        {
            executeFunc((n) => n * n * n * n, 10);
            executeFunc((n) => { return n * n * n * n; }, 10);
        }

        private void button8_Click(object sender, EventArgs e)
        {
            //아이디순 오름차순 정렬
            products.Sort(delegate (Product a, Product b)
            {
                return a.Id.CompareTo(b.Id);
            });
        }

        private void button9_Click(object sender, EventArgs e)
        {
            //가격순 오름차순 정렬 람다 코드
            products.Sort((a, b) => a.Price.CompareTo(b.Price));
        }

        private void button10_Click(object sender, EventArgs e)
        {
            //출력
            foreach (Product product in products)
            {
                MessageBox.Show($"Name : {product.Name}, Price : {product.Price}, Id : {product.Id}");
            }
        }
    }
}
