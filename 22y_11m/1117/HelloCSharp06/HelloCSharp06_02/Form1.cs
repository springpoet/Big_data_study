using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp06_02
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            List<Student> students = new List<Student>();
            students.Add(new Student() { Name = "김성근", Grade = 1 });
            students.Add(new Student() { Name = "장태연", Grade = 2 });
            students.Add(new Student() { Name = "이용희", Grade = 3 });
            students.Add(new Student() { Name = "안서준", Grade = 1 });
            students.Add(new Student() { Name = "박재형", Grade = 2 });
            students.Add(new Student() { Name = "이동준", Grade = 3 });
            students.Add(new Student() { Name = "성근김", Grade = 1 });
            students.Add(new Student() { Name = "김청산", Grade = 2 });

            for(int i = 0; i < students.Count; i++)
            {
                Label label= new Label();
                label.Text = $"{students[i].Grade}학년 {students[i].Name} 학생";
                label.AutoSize = true;
                label.Location = new Point(13, 13 + (23 + 3) * i);
                Controls.Add(label);
            }

            for(int i = students.Count - 1; i >= 0; i--)
            {
                if (students[i].Grade > 1)
                {
                    students.RemoveAt(i);
                }
            }
            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"{students[i].Grade}학년 {students[i].Name} 학생";
                label.AutoSize = true;
                label.Location = new Point(130, 13 + (23 + 3) * i);
                Controls.Add(label);
            }


        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
