package javastudy01;

public class PorkCutlet extends Food {

	public PorkCutlet(String name, int price) {
		super(name, price);
		// TODO Auto-generated constructor stub
	}

	public void eat() {
		// TODO Auto-generated method stub
		System.out.println(getName() + "은 최고의 돈까스");
		System.out.println(getPrice() + "의 값이 아깝지 않음");
	}

	public void eat(int count) {
		System.out.println(count + "번 먹었당");
	}

	public void eat(String source) {
		System.out.println(source + "소스를 써서 먹음");
	}
}
