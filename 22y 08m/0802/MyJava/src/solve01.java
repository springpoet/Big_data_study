import java.util.Scanner;

public class solve01 {
	public static void main(String args[]) {

		Scanner s=new Scanner(System.in);
		
		String name=s.next();
		int year=s.nextInt();
		s.nextLine();//위에서 입력받은 버퍼를 빼주는 작업.
		String say=s.nextLine();
		
		System.out.println("Hello World"+name);
		System.out.println("올해는"+year+"년 입니다.");
		System.out.println("당신의 각오를 말해보세요.");
		System.out.println("<"+say+">");
		
	}
}