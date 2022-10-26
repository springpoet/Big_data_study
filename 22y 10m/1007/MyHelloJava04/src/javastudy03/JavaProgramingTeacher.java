package javastudy03;

public class JavaProgramingTeacher extends ProgrammingTeacher {

	public JavaProgramingTeacher(String name,String major) {
		super(name,major);
		// TODO Auto-generated constructor stub
	}
	@Override
	public void Teach() {
		// TODO Auto-generated method stub
		super.Teach();
		System.out.println("자바프로그래밍 선생님 정보!");
		System.out.println(getName()+"선생님이 가르치는 과목은");
		System.out.println(getMajor()+"이다.");
	}

}
