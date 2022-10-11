package javastudy05;

public class Student {
	private int Age;
	private String Name;
	
	public static void error(int Age) throws Exception {
		if (Age<=0) {
			throw new Exception("나이값 잘못 입력함");
		}
	}
	public int getAge() {
		return Age;
	}
	public void setAge(int age) {
		Age = age;
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	
}
