package javastudy01;

import java.util.*;

public class HelloJava03 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);

		List<Integer> list = new ArrayList<Integer>();
		
		int count = scan.nextInt();
		
		for (int i = 0; i < count; i++) {
			for (int j = 1; j <= 45; j++) {
				list.add(j);
			}
			
			int[] lotto = new int[6];

			for (int j = 0; j < lotto.length; j++) {
				int num = (int) (Math.random() * list.size());
				lotto[j] = list.get(num);
				list.remove(num);
			}
			
			for (int j = 0; j < 6; j++) {
				for (int k = j + 1; k < 6; k++) {
					if (lotto[j] > lotto[k]) {
						int temp = lotto[j];
						lotto[j] = lotto[k];
						lotto[k] = temp;
					}
				}
			}
			System.out.println("로또 번호 :");

			for (int j = 0; j < 6; j++) {
				System.out.print(lotto[j] + " ");
			}
			System.out.println();
		}
	}
}
