package javastudy01;

public class Food {
	private String name;
	private int price;

	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getPrice() {
		return price;
	}

	public void setPrice(int price) {
		this.price = price;
	}
	
	public void eat() {
		System.out.println(name+"을 "+price+"원으로 먹음!");
	}
	public Food(String name, int price) {
		super();
		this.name = name;
		this.price = price;
	}
	
	public Food(String name) {
		super();
		this.name = name;
	}
	
}
