package javastudy03;

public class HelloJava02_Teacher {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MathTeacher mt1=new MathTeacher("���н�","��1");
		ProgrammingTeacher pt1=new ProgrammingTeacher("�̵���","c++");
		JavaProgramingTeacher jpt1=new JavaProgramingTeacher("������","�ڹ�");
		mt1.Teach();
		pt1.Teach();
		jpt1.Teach();
		
		Teacher temp=new Teacher() {
			public void Teach() {
				System.out.println(getName()+"�� "+getMajor()+"�������ε�");
				System.out.println("�𸣴� ����̴�!!");
			}
		};
		temp.setName("�쿡��");
		temp.setMajor("�������");
		temp.Teach();
	}
}
