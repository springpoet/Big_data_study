package javastudy04;

public class HelloJava03_throw {

	public static int sum(int start, int end) throws Exception {
		if (end < start) {
			throw new Exception("start와 end 순서 잘못됨");
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
			System.out.println("안녕하세요.");
			throw new Exception("에러!!!");
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
