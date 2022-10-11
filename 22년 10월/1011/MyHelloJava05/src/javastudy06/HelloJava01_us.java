package javastudy06;

import java.util.ArrayList;
import java.util.List; 
import java.util.Scanner;

public class HelloJava01_us {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s=new Scanner(System.in);
		
		Student s1=new Student();
		try {
			System.out.println("학생 나이는?");
			int age=Integer.parseInt(s.nextLine());
			s1.setAge(age);
			System.out.println("학생 이름은?");
			s1.setName(s.nextLine());
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println("잘못된 값");
			s1.setName("수정 예정 학생1");
		}
		
		Student s2=new Student();
		try {
			System.out.println("학생 나이는?");
			int age=Integer.parseInt(s.nextLine());
			s2.setAge(age);
			System.out.println("학생 이름은?");
			s2.setName(s.nextLine());
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println("잘못된 값");
			s2.setName("수정 예정 학생2");
		}
		List<Student> students=new ArrayList<Student>();
		students.add(s1);
		students.add(s2);
		
		for (Student student : students) {
			System.out.println("학생 이름 : "+student.getName());
			System.out.println("학생 나이 : "+student.getAge());
			System.out.println("-------------");
		}
	}

}
