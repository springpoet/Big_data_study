using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Web.Script.Serialization;

namespace HelloCSharp11
{
    public class KakaoAPI
    {
        //KakaoAPI.Search(대구); 식으로 불러올 예정
        public static List<Locale> Search(string text)
        {
            List<Locale> list = new List<Locale>();

            string site = "https://dapi.kakao.com/v2/local/search/keyword.json";
            string query = $"{site}?query={text}";
            string restApiKey = "e3d66535f080be55a03664e4ce2c905a";
            string Header = $"KakaoAK {restApiKey}";

            WebRequest request = WebRequest.Create(query);
            request.Headers.Add("Authorization", Header);

            WebResponse response = request.GetResponse();

            Stream stream= response.GetResponseStream();
            StreamReader reader = new StreamReader(stream, Encoding.UTF8);

            string json = reader.ReadToEnd();

            JavaScriptSerializer js = new JavaScriptSerializer();

            //dynamic=js에서의 let 같은 것
            dynamic dob = js.Deserialize<dynamic>(json);
            dynamic docs = dob["documents"];
            object[] buf = docs;
            int length = buf.Length;
            for(int i = 0; i < length; i++)
            {
                string lname = docs[i]["place_name"];
                double x = double.Parse(docs[i]["x"]);
                double y = double.Parse(docs[i]["y"]);
                list.Add(new Locale(lname, y, x));
            }

            return list;
        }
    }
}
