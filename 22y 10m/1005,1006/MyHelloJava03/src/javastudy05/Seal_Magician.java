package javastudy05;

import javastudy03.GameCharacter;

public class Seal_Magician extends GameCharacter {
	private int mp;

	public Seal_Magician() {
		super();
	}

	public int getMp() {
		return mp;
	}

	public void setMp(int mp) {
		this.mp = mp;
	}

	public void magicArrow() {
		System.out.println("히히 매직 발싸!");
	}

	public void attack() {
		System.out.println("마법 고오오옹겨어어억!");
	}

}
