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
		System.out.println("�ڹ����α׷��� ������ ����!");
		System.out.println(getName()+"�������� ����ġ�� ������");
		System.out.println(getMajor()+"�̴�.");
	}

}
