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
		System.out.println("���α׷��� ������ ����!");
		System.out.println(getName()+"�������� ����ġ�� ������ ");
		System.out.println(getMajor()+"�̴�.");
	
	}

}
