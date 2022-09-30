package my.hello.javastudy02;

public class Student {
	private String name;
	private int age;
	private int score;
	
	public Student() {
		
	}
	public Student(String name,int age, int score) {
		this.name=name;
		this.age=age;
		this.score=score;
	}
	public Student(String name) {
		this.name=name;
	}
	
	public String getName() {return this.name;}
	public void setName(String Name) {this.name=name;}
	public int getAge() {return this.age;}
	public void setAge(int age) {this.age=age;}
	public int getScore() {return this.score;}
	public void setScore() {this.score=score;}
	
}
