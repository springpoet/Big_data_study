import java.util.*;

// 클래스와 상속의 내용 총 정리
// 클래스는 C언어에서 배웠던 구조체의 업그레이드 버전
// 이 클래스를 보통 객체를 생성하는 데에 사용함
// 클래스의 구성 요소 : 필드(멤버 변수), 메소드(멤버 함수), 생성자

//class 키워드를 통해서 클래스 선언
class A{
	private int n1;
	// 실무에서는 public으로 주로 씀
	public A(int n) {
		System.out.println("n1의 값을 초기화 합니다.");
		this.n1=n;		
	}
	public void setN(int a) { 	//변수 n1의 값을 "변경"
		this.n1=a;
	}
	public int getN() { 		//변수 n1의 값을 "반환"
		return this.n1;
	}
	
	// 오버로딩 : 함수명이 같아도 매개변수의 수와 종류가 다르다면 함께 사용 가능
	public int Sum() { 
		System.out.println("매개변수 없는 Sum 함수 사용");
		return 1;
	}
	public int Sum(int a, int b) {
		System.out.println("매개변수 있는 Sum 함수 사용");
		return a+b;
	}
}

// 상속 : 부모 클래스(상위 클래스), 자식 클래스(하위 클래스) 개념
// 부모 클래스의 멤버를 자식 클래스가 복붙하여 자신의 것으로 만듬
// 원본의 멤버에 대해 복붙은 가능하지만 접근은 자유자재로 가능하지 않음
// (public이 아닐 경우)

// 상속을 할 때 extends 키워드 사용
class B extends A{	// A : 부모클래스, B : 자식클래스
	private int n2;
	// B에 대한 멤버 변수 : n1, n2 (n1에 대한 직접 접근은 불가능)
	
	// A클래스에서 생성자를 만든 상태기 때문에 해당 클래스에서
	// A클래스의 생성자를 반듯 ㅣ실행
	// 상속을 걸게 되면, 생성자 간에는 종속적인 관계가 생성
	public B(int a, int b) {
		// super() 함수 : 부모 클래스의 생성자를 불러와 실행
		super(a);
		this.n2=b;
	}
	
	// 오버라이딩 : 부모 클래스의 멤버와 자신(자식 클래스)의 클래스의 멤버 중
	// 동일한 멤버가 있을 경우 자기 자신의 것을 우선시 하여 사용
	public void setN(int a) { 
		this.n2=a;
	}
	public int getN() { 
		return this.n2;
	}
}

public class Java01 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		// 객체 생성을 하기 위해 new 키워드 사용
		// 객체 생성을 할 때에 생성자의 매개변수에 따라 값을 전송해야함

		//값을 직접 넣은 것
		A a=new A(1); 
		
		//값을 입력받아 넣는 것
		A a1=new A(scan.nextInt());
		//멤버 참조할 시 .을 사용 (C언어 구조체와 비슷)
		System.out.println("a의 n1 값은 "+a.getN());
		
		// 오버로딩 적용
		B b=new B(3,4);
		a.Sum();
		a.Sum(2,4);
		
		// 오버라이딩 적용
		System.out.println("a 객체의 n1 값 : "+a.getN());
		System.out.println("b 객체의 n2 값 : "+b.getN());
	}
}
