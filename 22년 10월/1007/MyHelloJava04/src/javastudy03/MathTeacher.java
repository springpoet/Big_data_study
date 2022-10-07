package javastudy03;

public class MathTeacher extends Teacher {

	public MathTeacher(String name,String major) {
		// TODO Auto-generated constructor stub
	super(name,major);
	
	}
	@Override
	public void Teach() {
		// TODO Auto-generated method stub
//		super.Teach();
		System.out.println("수학 선생님 정보!");
		System.out.println(getName()+"선생님이 가르치는 과목은 ");
		System.out.println(getMajor()+"이다.");
	
	}

}
