import java.util.Scanner;

class Students{
	private String name;
	private int stu_num;
	private String major;
	
	public Students(String a,int b, String c) {
		this.name=a;
		this.stu_num=b;
		this.major=c;
	}
	
	public void setName(String a){this.name=a;}
	public String getName() {return this.name;}
	public void setstu_num(int b) {this.stu_num=b;}
	public int getNum() {return this.stu_num;}
	public void setmajor(String c) {this.major=c;}
	public String getMajor() {return this.major;}
}
public class JavaSolve01 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		String st=scan.next();
		int n=scan.nextInt();
		String maj=scan.next();
		Student stu1= new Student(st,n,maj);
		System.out.println("학생 이름은 "+stu1.getName()+" 학번은 "+stu1.getNum()+" 전공은 "+stu1.getMajor());
	}

}
