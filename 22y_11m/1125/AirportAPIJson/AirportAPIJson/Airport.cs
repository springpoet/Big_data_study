using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirportAPIJson
{
    public class Airport
    {
        public Airport(string 항공사, string 운항편명, string 출발공항, string 도착공항, string 출발시간, string 도착시간, string 운항요일, string 시작일자, string 종료일자, string 국내_국제)
        {
            this.항공사 = 항공사;
            this.운항편명 = 운항편명;
            this.출발공항 = 출발공항;
            this.도착공항 = 도착공항;
            this.출발시간 = 출발시간;
            this.도착시간 = 도착시간;
            this.운항요일 = 운항요일;
            this.시작일자 = 시작일자;
            this.종료일자 = 종료일자;
            this.국내_국제 = 국내_국제;
        }
        
        //https://api.odcloud.kr/api/15003087/v1/uddi:57ea963b-b3d2-4c49-b48b-b5b39d2b97a6?page=1&perPage=10&serviceKey=fwXTJWfhnunAG%2BYx7cTvxtbnI2cpiWibQ2zILWGPSdk%2BlhCf1Ri79Smm4ZZNAy75l9Bu8b%2BaHYciAlVS3eCxpA%3D%3D
        public string 항공사 { get; set; }
        public string 운항편명 { get; set; }
        public string 출발공항 { get; set; }
        public string 도착공항 { get; set; }
        public string 출발시간 { get; set; }
        public string 도착시간 { get; set; }
        public string 운항요일 { get; set; }
        public string 시작일자 { get; set; }
        public string 종료일자 { get; set; }
        public string 국내_국제 { get; set; }
        

    }
}
