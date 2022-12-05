using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace MyPCRoom
{
    public partial class Form4 : Form
    {
        public Form4()
        {
            InitializeComponent();
            try
            {
                DataGridViewRow dr = dataGridView1.SelectedRows[0];
            }
            catch (Exception ex)
            {

            }
            //Cars 길이가 0 인데,
            //DataSource로 넣으려고 하면 셀 선택시 오류 남
            //셀 : datagridview의 칸들을 의미(엑셀의 셀처럼)
            if (DataManager.Cars.Count > 0)
                dataGridView1.DataSource = DataManager.Cars;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                PC_User user = DataManager.Cars.SingleOrDefault(x => x.User_id == textBox1.Text);
                DataManager.search(user.User_id);

                dataGridView1.DataSource = null;
                if (DataManager.Cars.Count > 0)
                {
                    dataGridView1.DataSource = DataManager.Cars;
                }
                MessageBox.Show($"'{user.User_id}' 회원이 성공적으로 조회되었습니다.");
            }
            catch (Exception ee)
            {
                MessageBox.Show(ee.Message + ", Form4.button1Click error.");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                dataGridView1.DataSource = "";
                DataManager.Load();
            }
            catch (Exception ex)
            {

            }
            //Cars 길이가 0 인데,
            //DataSource로 넣으려고 하면 셀 선택시 오류 남
            //셀 : datagridview의 칸들을 의미(엑셀의 셀처럼)
            if (DataManager.Cars.Count > 0)
                dataGridView1.DataSource = DataManager.Cars;
        }
    }
}
