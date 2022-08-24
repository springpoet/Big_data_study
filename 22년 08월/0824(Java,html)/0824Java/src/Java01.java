import java.util.Scanner;

class A{
	private int n1;
	public A(int a) {
		this.n1=a;
	System.out.println("A 클래스의 n1 값 : "+this.n1);
	}
	public void print(String s) {
		System.out.println(s+"의 n1의 값 : "+this.n1);
	}
	
}

class B extends A{
	private int n2;
	
	//super() : 부모 클래스의 생성자를 호출해서 실행
	//생성자의 형식만 복사해오고 값은 가져오지 않음
	public B(int a, int b) {
		super(a);
		this.n2=b;
		System.out.println("B 클래스의 n2 값 : "+this.n2);
	}
	
	public void print(String s) {
		System.out.println(s+"의 n2의 값 : "+this.n2);
	}
}

//오버라이딩 : 부모 클래스의 함수를 자식 클래스에서 다시 정의
//부모 클래스와 자식 클래스에 동일한 이름의 함수 있어도 정상 작동
//자식 클래스의 객체는 부모 클래스의 함수를 싱행하지 않음
//결론적으로 자식 클래스 입장에서는 "덮어쓰기"한 것

public class Java01 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		int i=scan.nextInt();
		A a=new A(i);
		
		int j=scan.nextInt();
		int k=scan.nextInt();
		B b=new B(j,k);
		
		System.out.println();
		a.print("a");
		b.print("b");
		//부모 클래스의 함수보다 자기 자신의 함수를 우선 시 한다.
	}
}
