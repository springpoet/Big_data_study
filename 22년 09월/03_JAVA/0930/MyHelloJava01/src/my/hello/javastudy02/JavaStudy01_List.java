package my.hello.javastudy02;
import java.util.*;

public class JavaStudy01_List {
	public static void main(String args[]) {
		//배열.
		//선언과 동시에 크기가 정해짐
		int[] numbers=new int[5];
		
		//ArrayList
		ArrayList<Integer> nums=new ArrayList<Integer>();
		
		numbers[0]=10;
		numbers[1]=30;
		System.out.println("첫번째 값 : "+numbers[0]);
		
		//값을 추가하는 것
		nums.add(10);
		nums.add(30);
		
		//특정 번째의 값 수정하기
		nums.set(0, 20);
		System.out.println(nums.get(0));
		
		for (Integer integer : numbers) {
			System.out.println(integer);
		}
		for (Integer integer : nums) {
			System.out.println(integer);
		}
	}
}
