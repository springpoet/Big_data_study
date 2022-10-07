package javastudy03;

public class ProgrammingTeacher extends Teacher {

	public ProgrammingTeacher(String name,String major) {
		// TODO Auto-generated constructor stub
		setName(name);
		setMajor(major);
	}
	@Override
	public void Teach() {
		// TODO Auto-generated method stub
//		super.Teach();
		System.out.println("프로그래밍 선생님 정보!");
		System.out.println(getName()+"선생님이 가르치는 과목은 ");
		System.out.println(getMajor()+"이다.");
	
	}

}
