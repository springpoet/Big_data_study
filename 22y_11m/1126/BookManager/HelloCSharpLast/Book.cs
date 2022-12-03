using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharpLast
{
    public class Book
    {
        public string Isbn { get; set; }
        public string Name { get; set; }
        
        public string Publisher { get; set; }
        public int Page { get; set; }
        public int UserId { get; set; } //책 빌린 사람 ID
        public string UserName { get; set; } //책 빌린 사람 이름
        public bool isBorrowed { get; set; } //대출 여부 체크
        public DateTime BorrowedAt { get; set; } //책 빌린 시간
    }
}
