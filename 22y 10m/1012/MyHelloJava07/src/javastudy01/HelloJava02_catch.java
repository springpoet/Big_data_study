package javastudy01;

import java.util.Scanner;

public class HelloJava02_catch {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//catch 여러개 달 수 있음
		//하지만 Exception은 제일 마지막에 달려야함
		
		int a=0, b=0, c=0;
		
		Scanner s=new Scanner(System.in);
		try {
			a=10;
			System.out.println("b는?");
			b=Integer.parseInt(s.nextLine());
			c=a/b;
		}catch(NumberFormatException e) {
			System.out.println("오류 원인 (포맷) "+e.getMessage());
		}catch(ArithmeticException e) {
			System.out.println("오류 원인 (연산) "+e.getMessage());
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println("뭔가 잘못됨'");
			e.printStackTrace();
		}
		System.out.println("과연 c 값은 ? : "+c);
	}

}
