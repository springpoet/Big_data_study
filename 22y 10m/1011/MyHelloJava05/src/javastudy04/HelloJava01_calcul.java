package javastudy04;

import java.util.Scanner;

public class HelloJava01_calcul {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		System.out.println("ù��° ��?");
		String num1 = s.nextLine();
		System.out.println("�ι�° ��?");
		String num2 = s.nextLine();

		int n1 = 0;
		int n2 = 0;
		try {
			n1 = Integer.parseInt(num1);
			n2 = Integer.parseInt(num2);
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println("�߸��� �� ��");
			n1 = 0;
		}
		if (n1 != 0) {
			System.out.println(n1 * (n2 % 10));
			System.out.println(n1 * ((n2 / 10) % 10));
			System.out.println(n1 * (n2 / 100));
			System.out.println(n1 * n2);
		}
		System.out.println("���α׷��� �����մϴ�.");
	}

}
