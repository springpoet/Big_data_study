package javastudy01;

import java.util.*;

public class HelloJava01 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);

		ArrayList<Integer> numbers = new ArrayList<Integer>();

		for (int i = 0; i < 5; i++) {
			numbers.add(scan.nextInt());
		}

		System.out.println(numbers);

		int del = scan.nextInt();

		for (int i = 0; i < numbers.size(); i++) {
			if (numbers.get(i) < del) {
				numbers.remove(i);
				i--;
			}
		}
		System.out.println(numbers);

		for (int i = 0; i < 5; i++) {
			numbers.add(scan.nextInt());
		}

		int max = numbers.get(0);
		int min = numbers.get(0);

		// foreach È°¿ë
		for (int i : numbers) {
			if (i > max) {
				max = i;
			}
			if (i < min) {
				min = i;
			}
		}
		System.out.println("ÃÖ´ñ°ª : " + max + " ÃÖ¼Ú°ª : " + min);

		for (int i = 0; i < numbers.size(); i++) {
			if (numbers.get(i) > max) {
				max = numbers.get(i);
			}
			if (numbers.get(i) < min) {
				min = numbers.get(i);
			}
		}
		System.out.println("ÃÖ´ñ°ª : " + max + " ÃÖ¼Ú°ª : " + min);
	}

}
