package my.hello.javastudy02;

import java.util.ArrayList;

public class JavaStudy02_List_class {

	public static void main(String[] args) {
		Student[] students=new Student[3];
		students[0]=new Student();
		students[1]=new Student("�̵���",34,1);
		Student s=new Student("����ȣ",29,2);
		students[2]=s;
		
		ArrayList<Student> mystudents=new ArrayList<Student>();
		mystudents.add(new Student("������",30,5));
		mystudents.add(new Student());
		Student ss=new Student("������",25,4);
		mystudents.add(ss);
		
		
	}

}
