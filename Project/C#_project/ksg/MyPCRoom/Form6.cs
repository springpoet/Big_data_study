using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MyPCRoom
{
    public partial class Form6 : Form
    {
        public static List<Button> SortedButton = new List<Button>();

        public Form6()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
            PC_User user = DataManager.Users.Single(x => x.User_id == textBox1.Text);
            DBHelper.UserLoginQuery(user.User_id, textBox2.Text);

            }
            catch (Exception ee)
            {
                MessageBox.Show(ee.Message+" form6.button1_click error");
            }
        }
    }
}
