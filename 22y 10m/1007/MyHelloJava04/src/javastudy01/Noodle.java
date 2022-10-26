package javastudy01;

public class Noodle extends Food{

	public Noodle(String name, int price) {
		super(name, price);
		// TODO Auto-generated constructor stub
	}
	@Override
	public void eat() {
		// TODO Auto-generated method stub
//		super.eat();
		System.out.println(getName()+" 면요리가 제일 좋아");
	}
	
	public void eat(String ingredient) {
		System.out.println(ingredient+"를 넣은 면요리!");
	}
}
