abstract class Phone{
	abstract public int getNum();
	abstract public String getName();
	abstract public void print();
}

class CellPhone extends Phone{
	private int num;
	private String name;
	
	public CellPhone(int num, String name) {
		this.num=num;
		this.name=name;
	}	
	public int getNum() {return this.num;}
	public String getName() {return this.name;}
	public void print() {
		System.out.println("휴대폰 정보");
		System.out.println("폰 기종 : "+this.name);
		System.out.println("폰 번호 : "+this.num);		
	}
}

class SmartPhone extends CellPhone{
	private int androidver;
	private String account;
	
	public SmartPhone(int num, String name, int ver, String acc) {
		super(num,name);
		this.androidver=ver;
		this.account=acc;
	}
	
	public void print() {
		System.out.println("휴대폰 세부 정보");
		System.out.println("폰 기종 : "+getName());
		System.out.println("폰 번호 : "+getNum());
		System.out.println("폰 버전 : "+this.androidver);
		System.out.println("폰 계정 : "+this.account);
	}
}
public class JavaQ1 {
	public static void main(String args[]) {
		CellPhone cp=new CellPhone(6366,"갤럭시");
		SmartPhone sp=new SmartPhone(5242,"갤럭시",13,"springpoet");
		
		cp.print();
		System.out.println();
		sp.print();
	}
}
