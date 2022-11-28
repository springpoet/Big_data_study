using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp11
{
    //위치정보 (위치이름, 그 위치의 좌표들)
    public class Locale
    {
        public string name { get; set; }
        public double Lat { get; set; }//Y 좌표
        public double Lng { get; set; }//X 좌표

        public Locale(string name, double lat, double lng)
        {
            this.name = name;
            Lat = lat;
            Lng = lng;
        }

        //String 으로 변환시 이름만 리털
        public override string ToString()
        {
            return name;
        }
    }
}
