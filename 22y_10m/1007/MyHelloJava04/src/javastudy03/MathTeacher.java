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
		System.out.println("���� ������ ����!");
		System.out.println(getName()+"�������� ����ġ�� ������ ");
		System.out.println(getMajor()+"�̴�.");
	
	}

}
