package javastudy06;

public class Student {
	private int age;
	private String name;
	
	public int getAge() {
		return age;
	}
	public void setAge(int age) throws Exception {
		if(age<=0) {
			throw new Exception("age값이 올바르지 않음."+age);
		}
		this.age = age;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	
	
}
