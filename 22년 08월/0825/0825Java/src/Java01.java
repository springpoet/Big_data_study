//상속의 개념, 적용하는 방법 + super() , 오버라이딩 복습
class Phone{	//부모 클래스
	private String name;	//폰 기종 이름
	private String num;		//폰 번호
	
	public Phone(String na, String num) {
		this.name=na;
		this.num=num;
	}
	
	public String getName() {return this.name;}
	public String getNum() {return this.num;}
	
	public void print() {
		System.out.println("phone의 프린트가 실행되었습니다.");
		System.out.println("휴대폰 정보");
		System.out.println("과거 기종 : "+this.name);
		System.out.println("과거 번호 : "+this.num);
		
	}
}

class SmartPhone extends Phone{	//자식 클래스
	private String androidver;	// 안드로이드 버전
	private String account;		// 연동버전
	// 멤버 변수 : androidver, account, name, num
	// 부모 클래스에 생성자가 만들어지면 자식 클래스에도 해당 생성자 자동 생성
	// 이를 위해서, super()를 주로 사용함
	public SmartPhone(String na, String num,String a){
		super(na,num);
		this.androidver="13";
		this.account=a;
	}
	
	//함수 이름과 매개변수의 구성도 같은 경우 자기 자신의 함수를 우선시 함
	//오버라이딩(오버로딩과 구분하셈)
	public void print() {
		System.out.println("SmartPhone의 프린트가 실행되었습니다.");
		System.out.println("휴대폰 정보");
		System.out.println("현재 기종 : "+this.getName());
		System.out.println("과거 기종 : "+this.getNum());
		System.out.println("안드로이드 버전 : "+this.androidver);
		System.out.println("연동 계정 : "+this.account);
	}
}

public class Java01 {
	public static void main(String args[]) {
		Phone p=new Phone("미라크","6366");
		SmartPhone sp=new SmartPhone("s21","5242","google");
		p.print();
		System.out.println();
		sp.print();
	}
}
