using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace MyPCRoom
{
    public partial class Form6 : Form
    {
        public Form6()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                PC_User user = DataManager.Users.Single(x => x.User_id == textBox1.Text);
                DataManager.LateTimeSave(user.User_id, user.Late_time);
                MessageBox.Show($"아이디 : '{user.User_id}', 이름 : '{user.Name}' 회원의 사용이 종료되었습니다.");

            }
            catch (Exception ee)
            {
                MessageBox.Show(ee.Message+" Form6.button1click error");
            }
        }
    }
}
