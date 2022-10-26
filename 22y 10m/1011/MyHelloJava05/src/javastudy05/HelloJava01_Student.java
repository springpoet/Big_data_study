package javastudy05;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava01_Student {
	public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
		ArrayList<Student> stu=new ArrayList<Student>();
		
		for(int i=0;i<3;i++) {
			System.out.println("학생의 이름은?");
			String name=s.nextLine();
			System.out.println("학생의 나이는?");
			int age=s.nextInt();
			stu[i].add(name,age);
		}
		
		int a=0;
		int b=0;
		int c=0;
		
		try {
			a=s1.getAge();
			b=s2.getAge();
			c=s3.getAge();
		} catch (Exception e) {
			// TODO: handle exception
			if(a<=0||b<=0||c<=0) {
				e.printStackTrace();
			}
		}
	}
}
