package javastudy08;

public class Animal {
	private String name;
	private int age;
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	
	public void AnimalInfo() {
		System.out.println("������ �̸� : "+name);
		System.out.println("������ ���� : "+age);
	}
	public void Sleep() {
		System.out.println("zzzzzz");
	}
}
