//덧셈 관련 클래스 만들어보고 생성자 메소드 오버로딩 학습

class Ex{
	private int a;
	private int b;
	private double n1;
	private double n2;
	
	
	//생성자 선언부
	//오버로딩 : 매개변수의 수와 타입이 다르면 같은 이름의 함수도 함께 사용 가능
	//다만 반환형만 다르면 오버로딩이 불가능하다.
	public Ex() {
		this.a=1;
		this.b=2;
	}
	public Ex(int a, int b) {
		this.a=a;
		this.b=b;
	}
	public Ex(double a, double b) {
		this.n1=a;
		this.n2=b;
	}
	
	//멤버 함수 선언부
	public int getA() {return this.a;}
	public int getB() {return this.b;}
	public double getN1() {return this.n1;}
	public double getN2() {return this.n2;}
	//생성자 오버로딩과 비슷한 방식으로 진행하면 됨
	//int형을 반환하는 덧셈 함수 구현
	public int sum(int a, int b) {
		return a+b;
	}
	//double형을 반환하는 덧셈 함수 구현
	public double sum(double a, double b) {
		return a+b;
	}
}
public class Java01 {
	public static void main(String args[]) {
		Ex test1=new Ex(); //매개변수가 없는 생성자를 자동으로 실행
		Ex test2=new Ex(7,7); //int형 매개변수가 있는 생성자 자동 실행
		Ex test3=new Ex(7.7,10.7);//double형 매개변수가 있는 생성자 실행
	
		int t1=test1.sum(test1.getA(),test1.getB());
		int t2=test2.sum(test2.getA(),test2.getB());
		double t3=test3.sum(test3.getN1(),test3.getN2());
		
		System.out.println("test1의 덧셈 결과: "+t1);
		System.out.println("test2의 덧셈 결과: "+t2);
		System.out.println("test3의 덧셈 결과: "+t3);
		
		//객체 배열
		//int i[]=new int[3];
		Ex s[]=new Ex[3]; //배열만 선언
		//객체 배열 생성
		s[0]=new Ex();
		s[1]=new Ex(3,5);
		s[3]=new Ex(1.1,7.7);
		
		// 객체 배열의 메소드 참조 및 사용
		int r1=s[0].sum(s[0].getA(), s[0].getB());
		int r2=s[1].sum(s[1].getA(), s[1].getB());
		double r3=s[2].sum(s[2].getN1(), s[2].getN2());
		
		System.out.println("s[0]의 덧셈 결과는 "+r1);
		System.out.println("s[1]의 덧셈 결과는 "+r2);
		System.out.println("s[2]의 덧셈 결과는 "+r3);
	}
}
