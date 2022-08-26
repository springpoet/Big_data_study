abstract class Phone2{
	abstract public int getNum();
	abstract public String getName();
	abstract public void print();
}

class CellPhone2 extends Phone2{
	private int num;
	private String name;
	public CellPhone2(int n,String na) {
		System.out.println("CellPhone 객체가 생성되었습니다.");
		this.num=n;
		this.name=na;
	}
	
	//추상 메소드 오버라이딩하여 구현
	public int getNum() {return this.num;}
	public String getName() {return this.name;}
	
	public void print() {
		System.out.println("CellPhone 정보");
		System.out.println("번호 : "+this.num);
		System.out.println("휴대폰 이름 : "+this.name);
	}
}

class SmartPhone2 extends CellPhone2{
	private String androidver;
	private String account;
	
	public SmartPhone2 (int n,String na,String a,String ac) {
		super(n,na);
		this.androidver=a;
		this.account=ac;
	}
	public void print() {
		System.out.println("SmartPhone2 정보");
		System.out.println("휴대폰 이름 : "+getName());
		System.out.println("휴대폰 번호 : "+getNum());
		System.out.println("휴대폰 버전 : "+this.androidver);
		System.out.println("휴대폰 계정 : "+this.account);
	}
}
public class JavaQ1T {
	public static void main(String args[]) {
		CellPhone2 c=new CellPhone2(5242,"갤럭시");
		SmartPhone2 s=new SmartPhone2(1234,"아이폰","13 pro","naver");
		c.print();
		System.out.println();
		s.print();
	}
}
