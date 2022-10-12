package javastudy02;

public class Student {
	private String Name;
	private int Age;
	
	public Student(String name, int age) {
		this.Name=name;
		this.Age=age;
	}

	public String getName() {
		return Name;
	}

	public void setName(String name) {
		Name = name;
	}

	public int getAge() {
		return Age;
	}

	public void setAge(int age) {
		Age = age;
	}
	@Override
	public String toString() {
		// TODO Auto-generated method stub
//		return super.toString();
		return "이름 : "+Name+", 나이 : "+Age;
	}
}
