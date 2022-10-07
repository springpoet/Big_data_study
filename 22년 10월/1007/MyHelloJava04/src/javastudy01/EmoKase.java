package javastudy01;

public class EmoKase extends Food {
	

	public void sayEmo() {
		System.out.println("주모!!!!");
	}
	
	public void choiceMenu() {
		System.out.println(getName()+"으로 주시오");
		System.out.println(getPrice()+"원 여기있소");
	}
	public EmoKase(String name, int price) {
		super(name,price);
	}
}
