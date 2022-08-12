//상속 : 특정 클래스의 멤버들을 물려받는다.
//부모클래스와 자식 클래스(상위클래스와 하위클래스)

//부모클래스
class A{
	private int n1;
	public int n2;
	//protected 
	//자기 자신과 자신으로부터 상속된 클래스에서만 사용 가능
	//자기 클래스가 포함된 패키지 전체에서 사용 가능
	protected int n3;
	
	
	//private n1의 값 변경하는 함수
	public void setN1(int n) {this.n1=n;} 
	//private n1의 값 반환하는 함수
	public int getN1() {return this.n1;}
	
	public void setN3(int n) {this.n3=n;}
	public int getN3() {return this.n3;}
}

//자식클래스
class B extends A{
	//public 의 멤버 상속 받음. n2 멤버가 복사 후 붙어넣기 됨
}
public class Java02 {
	public static void main(String args[]) {
		A a=new A(); //객체 a 생성
		B b=new B(); //객체 b 생성
		
		//public 이기 때문에 메인에서도 변경 가능
		a.n2=1;
		b.n2=5;
		System.out.println("객체 a에 대한 n2의 값 : "+a.n2);
		System.out.println("객체 b에 대한 n2의 값 : "+b.n2);
		
		//private 멤버 접근법
		a.setN1(10);
		b.setN1(10);
		System.out.println("객체 a에 대한 n1의 값 : "+a.getN1());
		System.out.println("객체 b에 대한 n1의 값 : "+b.getN1());
		
		//protected 멤버 접근법
		a.setN3(100);
		b.setN3(500);
		System.out.println("객체 a에 대한 protected 멤버의 값 : "+a.getN3());
		System.out.println("객체 b에 대한 protected 멤버의 값 : "+b.getN3());
	}
}
