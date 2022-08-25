
abstract class Animal2{
	abstract String getName();
	abstract void cry();
}

class Cat2 extends Animal2{
	private String name;
	public Cat2() {
		this.name="고양이";
	}
	public String getName() {
		return this.name;
	}
	public void cry() {
		System.out.println("\"야오오옹\"");
	}
}

class Dog2 extends Animal2{
	private String name;
	public Dog2(){
		this.name="강아지";
	}
	public String getName() {
		return this.name;
	}
	public void cry() {
		System.out.println("\"왈왈왈\"");
	}
}
public class JavaQ1T {
	public static void main(String arts[]) {
		Cat2 c1=new Cat2();
		Dog2 d1=new Dog2();
		System.out.print(c1.getName()+"의 울음 소리는 ");
		c1.cry();
		System.out.println();
		System.out.print(d1.getName()+"의 울음 소리는 ");
		d1.cry();
	}
}
