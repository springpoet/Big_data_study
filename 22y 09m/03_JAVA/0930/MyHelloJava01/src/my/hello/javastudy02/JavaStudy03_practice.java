package my.hello.javastudy02;
import java.util.*;
public class JavaStudy03_practice {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s=new Scanner(System.in);
		System.out.println("�� �� ���� �ұ��?");
		int count=s.nextInt();
		Student[] students_arr=new Student[count];
		for(int i=0;i<count;i++) {
			s.nextLine();
			System.out.println("�̸�?");
			String name=s.nextLine();
			System.out.println("����?");
			int age=s.nextInt();
			System.out.println("����?");
			int score=s.nextInt();
			students_arr[i]=new Student(name,age,score);
		}
		for(Student ss: students_arr) {
			System.out.println(ss.getName());
			System.out.println(ss.getAge());
			System.out.println(ss.getScore());
		}
		ArrayList<Student> stu_list=new ArrayList<Student>();
		for(int i=0;i<count;i++) {
			s.nextLine();
			System.out.println("�̸�?");
			String name=s.nextLine();
			System.out.println("����?");
			int age=s.nextInt();
			System.out.println("����?");
			int score=s.nextInt();
			stu_list.add(new Student(name,age,score));
		}
		for(Student ss: stu_list) {
			System.out.println(ss.getName());
			System.out.println(ss.getAge());
			System.out.println(ss.getScore());
		}
	}

}
