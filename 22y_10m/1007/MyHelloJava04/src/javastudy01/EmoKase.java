package javastudy01;

public class EmoKase extends Food {
	

	public void sayEmo() {
		System.out.println("�ָ�!!!!");
	}
	
	public void choiceMenu() {
		System.out.println(getName()+"���� �ֽÿ�");
		System.out.println(getPrice()+"�� �����ּ�");
	}
	public EmoKase(String name, int price) {
		super(name,price);
	}
}
