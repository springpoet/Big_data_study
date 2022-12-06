using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace useAPI
{
    public partial class Form1 : Form
    {

        List<string> x = new List<string>();
        List<string> y = new List<string>();
        public Form1()
        {
            InitializeComponent();

            StreamReader file = new StreamReader("인터넷_이용자수_20221205150010.csv", Encoding.Default);

            DataTable table = new DataTable();

            table.Columns.Add("");
            table.Columns.Add("");
            table.Columns.Add("");
            table.Columns.Add("");




            while (!file.EndOfStream)
            {
                string line = file.ReadLine();

                string[] data = line.Split(',');
                table.Rows.Add(data[0], data[1], data[2], data[3]);

                y.Add(data[0]);
                y.Add(data[1]);
                y.Add(data[2]);
                y.Add(data[3]);



            }
            dataGridView1.DataSource = table;


        }








        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            //데이터 누적방지
            chart1.Series[0].Points.Clear();

            //age
            string age = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();
            label2.Text = "      "+age + "\n  이용자 수\n(단위: 천 명)";

            //2019
            int a = int.Parse(dataGridView1.Rows[e.RowIndex].Cells[1].Value.ToString());
            //2020
            int b = int.Parse(dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString());
            //2021
            int c = int.Parse(dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString());

            chart1.Series[0].Points.AddXY(2019, a);
            chart1.Series[0].Points.AddXY(2020, b);
            chart1.Series[0].Points.AddXY(2021, c);
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            Dispose();
        }
    }
}

