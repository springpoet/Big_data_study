package javastudy01;

import java.util.*;

public class HelloJava02 {
	public static void main(String args[]) {
		List<Integer> nums = new ArrayList<Integer>();
		Scanner s = new Scanner(System.in);

		for (int i = 0; i < 5; i++) {
			System.out.println(i + 1 + "번째 숫자 입력하기");
			nums.add(s.nextInt());
		}
		System.out.println(nums);
		
		System.out.println("몇 미만의 숫자를 지울까요?");
		int cutline=s.nextInt();
		for(int i=nums.size()-1;i>=0;i--) {
			if(cutline>nums.get(i)) {
				nums.remove(i);
			}
		}
		System.out.println(nums);
	}
}
