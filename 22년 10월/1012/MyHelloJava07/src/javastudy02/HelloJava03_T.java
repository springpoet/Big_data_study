package javastudy02;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class HelloJava03_T {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		ArrayList<KBStudent> student = new ArrayList<KBStudent>();

		System.out.println("�� �� �Է��ұ��");
		int count = 0;
		try {
			count = Integer.parseInt(s.nextLine());
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println("���� �߸� �Է���");
			return;
		} finally {
			System.out.println("���α׷��� ����� ���ּ���");
		}

		for (int i = 0; i < count; i++) {
			String name;
			String gender;
			int age = 0;
			int number = 0;
			System.out.println("�̸���?");
			name = s.nextLine();
			System.out.println("������?");
			gender = s.nextLine();
			try {
				System.out.println("����?");
				age = Integer.parseInt(s.nextLine());
				System.out.println("��ȣ?");
				number = Integer.parseInt(s.nextLine());
				if (age <= 0) {
					System.out.println("���̰��� �߸���");
					age = 0;
				}
			} catch (Exception e) {
				// TODO: handle exception
				e.printStackTrace();
			}
			KBStudent k = new KBStudent(name, gender, age, number);
			if (student.contains(k)) {
				System.out.println("�ߺ��Դϴ�.");
				i--;
				continue;
			}
			student.add(k);
		}

		for (KBStudent kbStudent : student) {
			System.out.println(kbStudent);
		}
		Collections.sort(student);
		System.out.println("---���̼� ���(��������)----");
		for (KBStudent kbStudent : student) {
			System.out.println(kbStudent);
		}
	}
}