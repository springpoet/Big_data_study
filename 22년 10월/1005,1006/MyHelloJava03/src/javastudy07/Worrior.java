package javastudy07;

public class Worrior extends Novice {
	private int power;	
	public void punch() {
		System.out.println(power+"��ŭ�� ����");
	}
	public int getPower() {
		return power;
	}
	public void setPower(int power) {
		this.power = power;
	}
}
