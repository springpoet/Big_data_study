using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp08_01
{
    public partial class Form1 : Form,ISubject
    {
        public Form1()
        {
            InitializeComponent();
            Form2 frm2 = new Form2(this);
            frm2.TopLevel = false;
            frm2.FormBorderStyle = FormBorderStyle.None;
            panel1.Controls.Add(frm2);
            frm2.Show();

            Form3 frm3 = new Form3(this);
            frm3.TopLevel = false;  
            frm3.FormBorderStyle = FormBorderStyle.None;
            panel2.Controls.Add(frm3);
            frm3.Show();

            Form4 frm4 = new Form4(this,frm2,frm3);
            frm4.TopLevel = false;
            frm4.FormBorderStyle = FormBorderStyle.None;
            panel3.Controls.Add(frm4);
            frm4.Show();
        }
        List<IObserver> observers=new List<IObserver>();


        private void button1_Click(object sender, EventArgs e)
        {
            ISubject s = new Notifier();
            s.register(new Observer1() { name = "star1" });
            s.register(new Observer2());

            IObserver o1 = new Observer1();
            (o1 as Observer1).name = "Heo's observer";
            s.register(o1);
            s.notify("starcraft");
            s.unregister(o1);
            s.notify(",star2,");
        }

        public void register(IObserver o)
        {
            observers.Add(o);
            //throw new NotImplementedException();
        }

        public void unregister(IObserver o)
        {
            observers.Remove(o);
            //throw new NotImplementedException();
        }

        public void notify(string msg)
        {
            foreach (IObserver observer in observers)
            {
                observer.update(msg);
            }
            //throw new NotImplementedException();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            //notify(textBox1.Text);
            notify((sender as TextBox).Text);
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
