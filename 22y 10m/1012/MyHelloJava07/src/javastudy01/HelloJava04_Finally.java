package javastudy01;

public class HelloJava04_Finally {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a=0,b=0,c=0,d=0;
		try {
			a=10;
			c=a/b;
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println("�߸���");
			return;
		}finally {
			//�����ͺ��̽� ������ ���� ����
			//DB �����ϴ� ���� �Ǵ� ������ ������ �� ���� �����
			//finally �κп� DB ���� ���� �ڵ带 �Է�
			//catch�� �ɷ��� �� �κ��� ������ ������
		System.out.println("�� �κ��� ������ �����Ѵٰ�? ���");	
		}
		System.out.println("�� �κ��� ���� �� �� ���� ����.");
	}

}
