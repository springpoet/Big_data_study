package javastudy02;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class HelloJava03_T {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		ArrayList<KBStudent> student = new ArrayList<KBStudent>();

		System.out.println("몇 명 입력할까요");
		int count = 0;
		try {
			count = Integer.parseInt(s.nextLine());
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println("숫자 잘못 입력함");
			return;
		} finally {
			System.out.println("프로그램을 재시작 해주세요");
		}

		for (int i = 0; i < count; i++) {
			String name;
			String gender;
			int age = 0;
			int number = 0;
			System.out.println("이름은?");
			name = s.nextLine();
			System.out.println("성별은?");
			gender = s.nextLine();
			try {
				System.out.println("나이?");
				age = Integer.parseInt(s.nextLine());
				System.out.println("번호?");
				number = Integer.parseInt(s.nextLine());
				if (age <= 0) {
					System.out.println("나이값이 잘못됨");
					age = 0;
				}
			} catch (Exception e) {
				// TODO: handle exception
				e.printStackTrace();
			}
			KBStudent k = new KBStudent(name, gender, age, number);
			if (student.contains(k)) {
				System.out.println("중복입니다.");
				i--;
				continue;
			}
			student.add(k);
		}

		for (KBStudent kbStudent : student) {
			System.out.println(kbStudent);
		}
		Collections.sort(student);
		System.out.println("---나이순 출력(오름차순)----");
		for (KBStudent kbStudent : student) {
			System.out.println(kbStudent);
		}
	}
}