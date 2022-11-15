using System;

namespace HelloCSharp02_01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //사용자 정의 자료형
            //c : 구조체, java : class, c# : struct, class
            Student s1 = new Student();
            s1.Name = "오세룡";
            s1.Age = 20;
            s1.eye = 0.1;
            Student[] students = new Student[3];
            students[0] = s1;
            students[1] = new Student(); students[1].Name = "박지호";
            students[1].Age = 25;
            students[1].eye = 0.3;
            Console.WriteLine(s1.Name);
            Console.WriteLine(students[1].Name);
            Console.WriteLine(s1);

            Console.WriteLine("\n 1번");
            Student stu = new Student();
            stu.Name = "김성근";
            stu.Age = 28;
            stu.eye = 0.3;

            Console.WriteLine("\n2번");
            Student stu2 = new Student();
            stu2.Name = Console.ReadLine();
            stu2.Age = int.Parse(Console.ReadLine());
            stu2.eye = double.Parse(Console.ReadLine());

            Console.WriteLine("\n3번");
            Student[] stu3 = new Student[3];
            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine($"{i + 1}번째 학생 정보 입력");
                stu3[i] = new Student();
                Console.WriteLine("이름");
                stu3[i].Name = Console.ReadLine();
                Console.WriteLine("나이");
                stu3[i].Age = int.Parse(Console.ReadLine());
                Console.WriteLine("시력");
                stu3[i].eye = double.Parse(Console.ReadLine());
            }

            Console.WriteLine("\n5번");
            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine($"{i + 1}번 학생 정보\n학생 이름 : {stu3[i].Name} \n학생 나이 : {stu3[i].Age}\n학생 시력 : {stu3[i].eye}");
            }

            Console.WriteLine("\n6번");
            KBStudent[] kb1 = new KBStudent[2];
            for (int i = 0; i < 2; i++)
            {
                kb1[i] = new KBStudent();
                Console.WriteLine($"KB 배열 {i + 1}번째 학생 정보 입력");
                Console.WriteLine("이름");
                kb1[i].Name = Console.ReadLine();
                Console.WriteLine("나이");
                kb1[i].Age = int.Parse(Console.ReadLine());
                Console.WriteLine("MBTI");
                kb1[i].Mbti = Console.ReadLine();
                Console.WriteLine("시력");
                kb1[i].eye = double.Parse(Console.ReadLine());
            }
            for (int i = 0; i < 2; i++)
            {
                Console.WriteLine($"KB {i}번째 학생\n이름 : {kb1[i].Name}\n나이 : {kb1[i].Age}\nMbti : {kb1[i].Mbti}\n시력 : {kb1[i].eye}");
                Console.WriteLine();
            }
            KBStudent kb2 = new KBStudent();
            kb2.Name = "김성근";
            kb2.Age = 28;
            kb2.eye = 0.3;
            kb2.Mbti = "ISFP";
            kb2.introduce();
        }
    }
}
