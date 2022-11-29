using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.Remoting.Contexts;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ParkingCarManager
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            label1.Text = DateTime.Now.ToString($"yyyy년 MM일 dd일 HH시 mm분 ss초");
            try
            {
                textBox1.Text = DataManager.Cars[0].ParkingSpot+"";
                textBox2.Text = DataManager.Cars[0].carNumber;
                textBox3.Text = DataManager.Cars[0].driverName;
                textBox4.Text = DataManager.Cars[0].phoneNumber;
                textBox5.Text = textBox1.Text;
            }
            catch (Exception)
            {

            }
            //Cars 길이가 0인 상태에서 DataSource를 넣으려고하면 오류 남.
            if (DataManager.Cars.Count > 0)
            {
                dataGridView1.DataSource=DataManager.Cars;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //WriteLog("주차");
            if (textBox1.Text.Trim() == "")
            {
                MessageBox.Show("주차 공간 번호 입력하세요");
            }else if (textBox2.Text.Trim() == "")
            {
                MessageBox.Show("차량번호 입력하세요.");
            }
            else
            {
                try
                {
                    //single = List에서 원하는 참조값 하나만 가져옴.
                    //즉 car를 바꾸면 Cars안의 내용도 같이 바뀜
                    //만약 못 찾으면 catch로 빠진다.
                    //즉 엉뚱한 공간에 주차하려고하면 catch로 빠짐
                    ParkingCar car = DataManager.Cars.Single(x => x.ParkingSpot.ToString() == textBox1.Text);
                    if (car.carNumber.Trim() != "")
                    {
                        MessageBox.Show("해당 공간에 이미 차가 있습니다");
                    }
                    else
                    {
                        car.carNumber = textBox2.Text;
                        car.driverName = textBox3.Text;
                        car.phoneNumber = textBox4.Text;
                        car.parkingTime = DateTime.Now;

                        dataGridView1.DataSource = null;
                        dataGridView1.DataSource = DataManager.Cars;

                        DataManager.Save(textBox1.Text, textBox2.Text, textBox3.Text, textBox4.Text);//끝에 bool 생략 = 주차
                        string contents = $"주차공간 '{textBox1.Text}'에 " + $"{textBox2.Text}차를 주차했습니다.";
                        WriteLog(contents);
                        MessageBox.Show(contents);
                    }
                }
                catch (Exception)
                {
                    MessageBox.Show($"주차공간 '{textBox1.Text}' 은/는 없습니다.");
                    WriteLog($"주차공간 '{textBox1.Text}' 은/는 없습니다.");
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //WriteLog("출차");
            if (textBox1.Text.Trim() == "")
            {
                MessageBox.Show("주차 공간 번호 입력하세요.(출차)");
            }
            else if (textBox2.Text.Trim() == "")
            {
                MessageBox.Show("차량번호 입력하세요.");
            }
            else
            {
                try
                {
                    //single = List에서 원하는 참조값 하나만 가져옴.
                    //즉 car를 바꾸면 Cars안의 내용도 같이 바뀜
                    //만약 못 찾으면 catch로 빠진다.
                    //즉 엉뚱한 공간에 주차하려고하면 catch로 빠짐
                    ParkingCar car = DataManager.Cars.Single(x => x.ParkingSpot.ToString() == textBox1.Text);
                    // 위 코드를 델리게이트로 변환
                    // DataManager.Cars.Single(delegate(ParkingCar x) { return x.ParkingSpot.ToString()==textBox1.Text;});

                    if (car.carNumber.Trim() == "")
                    {
                        MessageBox.Show("아직 차가 없습니다.");
                    }
                    else
                    {
                        string oldCar = car.carNumber;
                        car.carNumber = "";
                        car.driverName = "";
                        car.phoneNumber = "";
                        car.parkingTime = new DateTime();

                        dataGridView1.DataSource = null;
                        dataGridView1.DataSource = DataManager.Cars;

                        //출차할땐 첫번째와 마지막 매개변수만 사용함.
                        DataManager.Save(textBox1.Text, textBox2.Text, textBox3.Text, textBox4.Text, true);//끝에 bool 생략 = 주차
                        string contents = $"주차공간 '{textBox1.Text}'에 " + $"{oldCar}차를 출차했습니다.";
                        WriteLog(contents);
                        MessageBox.Show(contents);
                    }
                }
                catch (Exception)
                {
                    MessageBox.Show($"주차공간 '{textBox1.Text}' 은/는 없습니다.");
                    WriteLog($"주차공간 '{textBox1.Text}' 은/는 없습니다.");
                }
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                int parkingSpot = int.Parse(textBox5.Text);//Convert.ToInt32(textBox1.Text);
                string parkingCar = lookUpParkingSpot(parkingSpot);
                string contents = "";
                if (parkingCar.Trim() != "")
                    contents = $"주차공간 {parkingSpot}에 " +
                        $"주차된 차는 {parkingCar}입니다.";
                else
                    contents =
                        $"주차공간 {parkingSpot}에 차가 없습니다.";
                WriteLog(contents);
                MessageBox.Show(contents);

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
                WriteLog(ex.Message + ex.StackTrace + "조회");
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            spot_add_delete(textBox5.Text, "insert");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            spot_add_delete(textBox5.Text, "delete");
        }

        private void button6_Click(object sender, EventArgs e)
        {
            DataManager.Load();
            dataGridView1.DataSource = null;
            if (DataManager.Cars.Count > 0)
                dataGridView1.DataSource = DataManager.Cars;
        }

        private void WriteLog(string contents)
        {
            string log = $"[{DateTime.Now.ToString("yyyy/MM/dd hh:mm:ss")}]" + $"{contents}";
            DataManager.printLog(log); //로그를 파일에 적음
            listBox1.Items.Insert(0, log); //로그를 화면에 출력
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            label1.Text = DateTime.Now.ToString($"yyyy년 MM일 dd일 HH시 mm분 ss초");
        }

        //CellContentClick
        //CurrentCellChanged => try catch 로 반드시 감싸야 함
        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            ParkingCar car=dataGridView1.CurrentRow.DataBoundItem as ParkingCar;
            textBox1.Text = car.ParkingSpot.ToString();
            textBox2.Text = car.carNumber;
            textBox3.Text = car.driverName;
            textBox4.Text = car.phoneNumber;
            textBox5.Text = textBox1.Text;


        }
        private string lookUpParkingSpot(int parkingSpot)
        {
            string parkedCarNum = "";
            //Single을 써서 특정 공간에 있는 차를 찾을 수도 있다.
            //Single이 부담스럽다면, for문이나 foreach문으로 탐색 가능
            foreach(var item in DataManager.Cars)
            {
                if(item.ParkingSpot == parkingSpot)
                {
                    parkedCarNum = item.carNumber;
                    break;
                }
            }
            return parkedCarNum;
        }
        private void spot_add_delete(string text, string v)
        {
            text = text.Trim(); //공백 제거 후 진행
            int.TryParse(text, out int pSpot);//주차 공간 번호 가져옴
            if (pSpot <= 0) //공간번호가 0 이하 혹은 이상한 값인 경우
            {
                WriteLog("주차 공간 번호는 0 이상의 숫자여야 함");
                MessageBox.Show("주차 공간 번호는 0 이상의 숫자여야 함");
                return; //메소드 종료(이벤트 종료)
            }
            string contents = "";
            //contents : DataManager에서 out과 ref로 인하여 함수 호출 뒤
            //변한 값이 저장되어 있음
            bool check = DataManager.Save(v, text, out contents);
            if (check)
                button6.PerformClick(); //리프래시 버튼을 누름
            MessageBox.Show(contents);
            WriteLog(contents);

        }
    }
}   
