package javastudy03;

public class HelloJava02_Teacher {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MathTeacher mt1=new MathTeacher("수학쌤","수1");
		ProgrammingTeacher pt1=new ProgrammingTeacher("이동준","c++");
		JavaProgramingTeacher jpt1=new JavaProgramingTeacher("이유나","자바");
		mt1.Teach();
		pt1.Teach();
		jpt1.Teach();
		
		Teacher temp=new Teacher() {
			public void Teach() {
				System.out.println(getName()+"은 "+getMajor()+"선생님인데");
				System.out.println("모르는 사람이다!!");
			}
		};
		temp.setName("우에엥");
		temp.setMajor("전기과목");
		temp.Teach();
	}
}
