package javastudy01;

import java.util.*;

public class HelloJava02 {
	public static void main(String args[]) {
		List<Integer> nums = new ArrayList<Integer>();
		Scanner s = new Scanner(System.in);

		for (int i = 0; i < 5; i++) {
			System.out.println(i + 1 + "��° ���� �Է��ϱ�");
			nums.add(s.nextInt());
		}
		System.out.println(nums);
		
		System.out.println("�� �̸��� ���ڸ� ������?");
		int cutline=s.nextInt();
		for(int i=nums.size()-1;i>=0;i--) {
			if(cutline>nums.get(i)) {
				nums.remove(i);
			}
		}
		System.out.println(nums);
	}
}
