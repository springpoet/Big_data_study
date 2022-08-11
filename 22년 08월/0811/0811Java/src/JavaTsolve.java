import java.util.Scanner;

class Student{
	private String name;
	private int number;
	private String gender;
	
	public Student(String n,int num, String g) {
		this.name=n;
		this.number=num;
		this.gender=g;
	}
	
	public String getName() {return this.name;}
	public int getNum() {return this.number;}
	public String getGender() {return this.gender;}
	public void setName(String n) {this.name=n;}
	public void setNum(int num) {this.number=num;}
	public void setGender(String g) {this.gender=g;}
}

public class JavaTsolve {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		Student stu[]=new Student[3];
		stu[0]=new Student("이동준",2009038033,"남");
		stu[1]=new Student("이제영",2007012034,"여");
		stu[2]=new Student("박준현",2002012034,"남");
		
		for(int i=0;i<3;i++) {
			if((stu[i].getName()).equals("이동준")) {
				stu[i].setNum(2019038033);
			}
		}
		//4.
		stu[1].setName("차승화");
		stu[1].setNum(3589259);
		stu[1].setGender("남자");
		stu[2].setName("김성근");
		stu[2].setNum(5278555);
		stu[2].setGender("남자");
		
		//5.
		for(int i=0;i<3;i++) {
			System.out.println((i+1)+"번째 학생");
			System.out.println("이름 : "+stu[i].getName());
			System.out.println("학번 : "+stu[i].getNum());
			System.out.println("성별 : "+stu[i].getGender());
		}
	}
}
