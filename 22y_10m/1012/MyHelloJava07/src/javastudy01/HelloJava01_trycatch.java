package javastudy01;

public class HelloJava01_trycatch {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a = 0, b = 0, c = 0;
		try {
			a = 10;
			b = 0;
			c = a / b;
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println("�� �κп� ���� ����");
			e.printStackTrace();
		}
		System.out.println("a = " + a);
		System.out.println("b = " + b);
		System.out.println("c = " + c);
	}

}
