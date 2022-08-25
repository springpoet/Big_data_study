// extends를 이용한 상속을 계속 배워왔음
// 추상 클래스가 이 상속을 더 적극적으로 이용
// 추상 메소드 :: "추상적인 클래스"
// 추상 클래스는 추상 메소드를 하나라도 포함하고 있어야함
// 추상 클래스를 통해선 정상적인 객체를 생성 할 수 가 없음
// 그 말은, 즉 추상 클래스는 반드시 상속 받아져서 구체화가 필요함
// 추상 메소드 : "추상적인 메소드", 구체적으로 정의되지 않은 메소드

abstract class Person{
	abstract public void printName();
	abstract public void print();
}

class Me extends Person{
	
	private String name;
	public Me(String n) {
		this.name=n;
	}
	
	public void printName() {

		System.out.println("제 이름은 "+this.name+"입니다.");
	}
	public void print() {
		System.out.println("잘 부탁드립니다!!!");
	}
}

public class Java02 {
	public static void main(String args[]) {
		Me m=new Me("김성근");
		m.printName();	
		m.print();		
	}
}
