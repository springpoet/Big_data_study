package javastudy02;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava03_KBS {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		ArrayList<KBStudent> stu = new ArrayList<KBStudent>();

		System.out.println("�� ��?");
		int people = s.nextInt();
		for (int i = 0; i < people; i++) {
			s.nextLine();
			System.out.println("�л� �̸���?");
			String name = s.nextLine();
			System.out.println("�л� ������?");
			String gender = s.nextLine();
			System.out.println("�л� ���̴�?");
			int age = s.nextInt();
			System.out.println("�л� ��ȣ��?");
			int number = s.nextInt();
			KBStudent temp = new KBStudent(name, gender, age, number);
			for (KBStudent kbStudent : stu) {
				try {
					kbStudent.bigyo(number);
					System.out.println("�ߺ��� ��ȣ�Դϴ�.");
					System.out.println("ó������ �ٽ� �Է��ϼ���.");
					i--;
				} catch (Exception e) {
					// TODO: handle exception
					e.printStackTrace();
					stu.add(temp);
				}
			}
			for (KBStudent kbStudent : stu) {
				System.out.println(kbStudent.toString());
			}

		}
	}
}
