package javastudy04;

public class HelloJava03_throw {

	public static int sum(int start, int end) throws Exception {
		if (end < start) {
			throw new Exception("start�� end ���� �߸���");
		} else {
			int sum = 0;
			for (int i = start; i <= end; i++) {
				sum += i;
			}
			return sum;
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			System.out.println("�ȳ��ϼ���.");
			throw new Exception("����!!!");
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		
		try {
			int num=sum(10,1);
			System.out.println(num);
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
	}

}
