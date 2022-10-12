package javastudy02;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava03_KBS {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		ArrayList<KBStudent> stu = new ArrayList<KBStudent>();

		System.out.println("몇 명?");
		int people = s.nextInt();
		for (int i = 0; i < people; i++) {
			s.nextLine();
			System.out.println("학생 이름은?");
			String name = s.nextLine();
			System.out.println("학생 성별은?");
			String gender = s.nextLine();
			System.out.println("학생 나이는?");
			int age = s.nextInt();
			System.out.println("학생 번호는?");
			int number = s.nextInt();
			KBStudent temp = new KBStudent(name, gender, age, number);
			for (KBStudent kbStudent : stu) {
				try {
					kbStudent.bigyo(number);
					System.out.println("중복된 번호입니다.");
					System.out.println("처음부터 다시 입력하세요.");
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
