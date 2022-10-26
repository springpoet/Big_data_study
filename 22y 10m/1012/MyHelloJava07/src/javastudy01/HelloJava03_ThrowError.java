package javastudy01;

public class HelloJava03_ThrowError {

	//이 메소드는 에러가 발생 할 수도 있다.
	public static void mul(int s, int e) throws Exception {
		if(s>e) {
			throw new Exception("잘못된 매개변수! s가 더 큼");
		}
		for(int i=s;i<=e;i++) {
			for(int j=1;j<10;j++) {
				System.out.println(i+"x"+j+"="+(i*j));
			}
		}
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try {
			mul(2,9);
			mul(9,2);
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		
		
	}

}
