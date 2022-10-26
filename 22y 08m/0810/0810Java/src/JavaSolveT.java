class Student{
	//멤버 변수 선언부
	private String name;
	private int number;
	private String major;
	
	
	//멤버 함수 선언부
	public String getName() {return name;}
	public int getNum() {return number;}
	public String getMajor() {return major;}

	//생성자 선언부
	public Student(String n,int num, String m) {
		this.name=n;
		this.number=num;
		this.major=m;
	}
}
public class JavaSolveT {
	public static void main(String args[]) {
		Student stu=new Student("KSG",52,"Taxation");
		System.out.println(stu.getName());
		System.out.println(stu.getNum());
		System.out.println(stu.getMajor());
	}
}
