package javastudy04;

public class HelloJava01_check {
	public static void main(String args[]) {

		Student s1 = new Student();
		UniversityStudent u1 = new UniversityStudent();
		UnivStudent us1 = new UnivStudent();

		s1.setAge(10);
		s1.setName("��ο�");

		u1.setAge(20);
		u1.setName("������");
		u1.setHakbeon("1234");

		us1.setAge(28);
		us1.setName("�輺��");
		us1.setHakbeon("12345");

		KBStudent k1 = new KBStudent();
		k1.setName("�輺��");
		k1.setAge(28);
		k1.setGender("����");
		k1.setEducation("����");

		k1.attend("�Խ�");

		Sphere ss1 = new Sphere(6);
		System.out.println(ss1.getvolume());

		Cuboid cc1 = new Cuboid(5);
		cc1.setH(5);
		cc1.setW(7);
		System.out.println(cc1.getCuvoidVolumn());
	}
}
