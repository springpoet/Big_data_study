package my.hello.javastudy02;
import java.util.*;

public class JavaStudy01_List {
	public static void main(String args[]) {
		//�迭.
		//����� ���ÿ� ũ�Ⱑ ������
		int[] numbers=new int[5];
		
		//ArrayList
		ArrayList<Integer> nums=new ArrayList<Integer>();
		
		numbers[0]=10;
		numbers[1]=30;
		System.out.println("ù��° �� : "+numbers[0]);
		
		//���� �߰��ϴ� ��
		nums.add(10);
		nums.add(30);
		
		//Ư�� ��°�� �� �����ϱ�
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
