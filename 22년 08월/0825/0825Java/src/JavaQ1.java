abstract class Animal{
	abstract public String getName();
	abstract public String cry();
	}

class Dog extends Animal{
	private String name;
	
	public Dog(String n) {
		this.name=n;
	}
	public String getName() {
		return this.name;
	}
	public String cry() {
		return "월월월";
	}
	public void print() {
		System.out.println(getName()+"의 울음소리는 "+"\""+cry()+"\"");
	}

}

class Cat extends Animal{
	private String name;
	
	public Cat(String n) {
		this.name=n;
	}
	public String getName() {
		return this.name;
	}
	public String cry() {
		return "야오오옹";
	}
	public void print() {
		System.out.println(getName()+"의 울음소리는 "+"\""+cry()+"\"");
	}

}

public class JavaQ1 {
	public static void main(String args[]) {
		Dog d=new Dog("강아지");
		d.print();
		Cat c=new Cat("고양이");
		c.print();
	}
}
