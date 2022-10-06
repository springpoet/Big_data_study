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
		System.out.println("동물의 이름 : "+name);
		System.out.println("동물의 나이 : "+age);
	}
	public void Sleep() {
		System.out.println("zzzzzz");
	}
}
