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
			System.out.println("잘못됨");
			return;
		}finally {
			//데이터베이스 연동시 많이 쓰임
			//DB 연결하는 과정 또는 쿼리문 삭제할 때 예외 생기면
			//finally 부분에 DB 접속 끊는 코드를 입력
			//catch에 걸려도 이 부분은 무조건 실행함
		System.out.println("이 부분은 무조건 실행한다고? 띠용");	
		}
		System.out.println("이 부분이 실행 안 될 수도 있음.");
	}

}
