package javastudy02;

public class HelloJava01_Stu {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student s=new Student("이동준",34);
		System.out.println(s.getAge());
		System.out.println(s.getName());
		System.out.println(s);
		System.out.println(s.toString());
		
		Student s2=new Student("이동준",34);
		System.out.println(s2);
	}

}
