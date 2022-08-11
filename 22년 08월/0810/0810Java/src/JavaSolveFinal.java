class kstudents{
	//멤버 변수 선언부
	private String name;
	private int num;
	private String major;

	//멤버 함수 선언부
	public String getName() {return name;}
	public int getNum() {return num;}
	public String getMajor() {return major;}
	
	//생성자 선언부
	public kstudents(String na,int n,String m) {
		this.name=na;	
		this.num=n;	
		this.major=m;
	}
}


public class JavaSolveFinal {
	public static void main(String args[]) {
		//객체 선언부
		//클래스명 객체이름 = new 클래스명();
		Student s= new Student("KSG", 5278555,"taxation");
		
		System.out.println(s.getName());
		System.out.println(s.getNum());
		System.out.println(s.getMajor());
	}

}
