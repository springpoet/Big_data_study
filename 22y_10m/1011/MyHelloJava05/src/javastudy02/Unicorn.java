package javastudy02;

public class Unicorn extends Cryptid implements Fliable, Runsable {
	private String Color;
	
	public String getColor() {
		return Color;
	}

	public void setColor(String color) {
		Color = color;
	}

	@Override
	public void Run() {
		// TODO Auto-generated method stub
		System.out.println("������ �ݴϴ�!!");
	}

	@Override
	public void jog() {
		// TODO Auto-generated method stub
		System.out.println("������ ������ �մϴ�!!");
	}

	@Override
	public void Fly() {
		// TODO Auto-generated method stub
		System.out.println("����ϰ� ���ϴ�");
	}

	@Override
	public void FlapWing() {
		// TODO Auto-generated method stub
		System.out.println("����ϰ� �۴��ŷ���");
	}

	public void sleep() {
		System.out.println("������ ���� ���ڿ�");
	}

	public void cry() {
		System.out.println(Color+"�� ���� �𳯸���.");
		System.out.println("������������");
	}
}
