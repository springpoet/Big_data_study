using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp06_04
{
    internal class Product
    {
        public string Name { get; set; }
        public int Price { get; set; }

        public Product()
        {

        }
        //기본 내장된 위의 생성자 외에 내가 생성자를 하나 만들면
        //기본 생성자가 지워진다.
        //기본 생성자도 같이 쓰고 싶다면 직접 적어줘야 함
        //생성자 오버로딩
        public Product(string name)
        {
            this.Name = name;
        }
        public Product(int price)
        {
            this.Price = price;
        }
        public Product(String name, int price)
        {
            this.Name = name;
            this.Price = price;
        }
    }
}
