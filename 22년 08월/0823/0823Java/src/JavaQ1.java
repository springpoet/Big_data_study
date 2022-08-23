import java.util.Scanner;

class Person2{
	private String name;
	private int age;
	
	public Person2(String n,int a) {
		this.name=n;
		this.age=a;
	}
	
	public void setName(String n) {this.name=n;}
	public String getName() {return this.name;}
	public int getAge() {return this.age;}
	public void print_P2() {
		System.out.println("정보");
		System.out.println("이름 : "+this.name);
		System.out.println("나이 : "+this.age);
	}
	
}

class Student2 extends Person2 {
	private String School_name;
	
	public Student2(String n,int a,String s) {
		super(n,a);
		this.School_name=s;
	}
	public String getSname () {return this.School_name;}
	public void setSname(String s) {this.School_name=s;}
	public void print_S2() {
		System.out.println("학생 정보");
		System.out.println("이름 : "+this.getName());
		System.out.println("나이 : "+this.getAge());
		System.out.println("학교 : "+School_name);
	}
}

class Teacher2 extends Person2{
	private String sosok;
	
	public Teacher2(String n, int a, String sosok) {
		super(n,a);
		this.sosok=sosok;
	}
	public String getSosok () {return this.sosok;}
	public void setSosok(String sosok) {this.sosok=sosok;}
	public void print_T2() {
		System.out.println("선생님 정보");
		System.out.println("이름 : "+this.getName());
		System.out.println("나이 : "+this.getAge());
		System.out.println("소속 : "+this.getSosok());
		
	}
}
public class JavaQ1 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		
		Person2 p2=new Person2("김성근",28);
		Student2 s2=new Student2("KSG",28,"오성고");
		Teacher2 t2=new Teacher2("KIM",28,"우리집");
		p2.print_P2();
		System.out.println();
		p2.setName(scan.nextLine());
		System.out.println();
		p2.print_P2();
		System.out.println();
		s2.print_S2();
		System.out.println();
		t2.print_T2();
	}
}
