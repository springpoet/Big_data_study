using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;

namespace AirportAPIJson
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            airportBindingSource.Clear();

            int.TryParse(textBox1.Text, out int count);

            if (count < 1)
                count = 1;
            //while (true)
            {

                using (WebClient wc = new WebClient())
                {
                    wc.Encoding = Encoding.UTF8;
                    var json = wc.DownloadString("https://api.odcloud.kr/api/15003087/v1/uddi:57ea963b-b3d2-4c49-b48b-b5b39d2b97a6?page=1&perPage=172&serviceKey=fwXTJWfhnunAG%2BYx7cTvxtbnI2cpiWibQ2zILWGPSdk%2BlhCf1Ri79Smm4ZZNAy75l9Bu8b%2BaHYciAlVS3eCxpA%3D%3D");

                    var jArray = JObject.Parse(json);

                    foreach(var item in jArray["data"])
                    {
                        Airport temp =
                        new Airport(item["항공사"].ToString(),
                        item["운항편명"].ToString(), item["출발공항"].ToString(),
                        item["도착공항"].ToString(), item["출발시간"].ToString(),
                        item["도착시간"].ToString(), item["운항요일"].ToString(),
                        item["시작일자"].ToString(),
                        item["종료일자"].ToString(), item["국내_국제"].ToString());
                        airportBindingSource.Add(temp);
                    }
                }
            }
        }
    }
}
