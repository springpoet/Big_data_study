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
			System.out.println("�л� ���̴�?");
			int age=Integer.parseInt(s.nextLine());
			s1.setAge(age);
			System.out.println("�л� �̸���?");
			s1.setName(s.nextLine());
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println("�߸��� ��");
			s1.setName("���� ���� �л�1");
		}
		
		Student s2=new Student();
		try {
			System.out.println("�л� ���̴�?");
			int age=Integer.parseInt(s.nextLine());
			s2.setAge(age);
			System.out.println("�л� �̸���?");
			s2.setName(s.nextLine());
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println("�߸��� ��");
			s2.setName("���� ���� �л�2");
		}
		List<Student> students=new ArrayList<Student>();
		students.add(s1);
		students.add(s2);
		
		for (Student student : students) {
			System.out.println("�л� �̸� : "+student.getName());
			System.out.println("�л� ���� : "+student.getAge());
			System.out.println("-------------");
		}
	}

}
