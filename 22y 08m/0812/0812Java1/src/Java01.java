//클래스 내용 복습
//클래스 구성 : 필드(멤버 변수), 메소드(멤버 함수), 생성자
//접근 제어자 : public(외부로 공개), private(외부로 공개 x)
//객체 생성 : new 키워드 사용, 클래스명 사용
//클래스명은 int double 과 같은 타입명과 비슷한 취급
//멤버 참조 및 호출과 같은 사용은 구조체와 비슷함
//오버로딩 :메소드 오버로딩, 생성자 오버로딩
//오버로딩 : 매개변수의 구성을 다르게 하여 동일한 함수명을 함께 사용하는 것
//this 문법 : 객체 자신을 가리키는 포인터 개념

//오늘 예제 : 도형 넓이를 계산하는 클래스 만들고 사용하기
//도형은 원, 사각형, 직각삼각형으로 한정
import java.util.Scanner;

class Shape{
	//멤버 변수 선언부
	public String name;
	public int a;
	public int b;
	public boolean t; //직각 여부 체크
	
	//생성자 선언부
	public Shape(String n, int a) {
		this.name=n;
		this.a=a;
	}
	
	public Shape(String n, int a, int b) {
		this.name=n;
		this.a=a;
		this.b=b;
	}
	
	public Shape(String n,int a,int b,boolean t) {
		this.name=n;
		this.a=a;
		this.b=b;
		this.t=t;
	}
	public double getSize(int r) {
		return r*r*3.14;
	}
	public int getSize(int n1, int n2) {
		return n1*n2;
	}
	public double getSize(int n1,int n2,boolean t) {
		if(t==true) {System.out.println("직각삼각형입니다.");}
		else {System.out.println("직각삼각형이 아닙니다.");}
		return n1*n2/2;
	}
}

public class Java01 {
	public static void main(String args[]) {
		Scanner s= new Scanner(System.in);
		Shape sh[]=new Shape[3];
		for(int i=0;i<3;i++) {
			String name=s.next();
			if(name.equals("원")) {
				int a=s.nextInt();
				sh[i]=new Shape(name,a);
			}
			else {
				int a=s.nextInt();
				int b=s.nextInt();
				sh[i]=new Shape(name,a,b);
			}
		}
		for(int i=0;i<3;i++) {
			double size;
			if(sh[i].name.equals("원")) {		// 원의 넓이를 구하는 조건문
				size=sh[i].getSize(sh[i].a);
				System.out.println("해당 원의 넓이는 "+size);
			}
			else if(sh[i].name.equals("사각형")) {	// 사각형 넓이를 구하는 조건문
				size=sh[i].getSize(sh[i].a, sh[i].b);
				System.out.println("해당 사각형의 넓이는 "+size);
			}
			else {	// 삼각형의 넓이를 구하는 조건문
				size=sh[i].getSize(sh[i].a, sh[i].b, sh[i].t);
				System.out.println("해당 삼각형의 넓이는 "+size);
			}
		}
	}
}
