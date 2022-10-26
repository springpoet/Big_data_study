package my.hello.javastudy02;

import java.util.ArrayList;

public class JavaStudy02_List_class {

	public static void main(String[] args) {
		Student[] students=new Student[3];
		students[0]=new Student();
		students[1]=new Student("이동준",34,1);
		Student s=new Student("박지호",29,2);
		students[2]=s;
		
		ArrayList<Student> mystudents=new ArrayList<Student>();
		mystudents.add(new Student("김진규",30,5));
		mystudents.add(new Student());
		Student ss=new Student("도광현",25,4);
		mystudents.add(ss);
		
		
	}

}
