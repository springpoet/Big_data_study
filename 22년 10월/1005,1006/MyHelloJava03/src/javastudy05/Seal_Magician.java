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
		System.out.println("���� ���� �߽�!");
	}

	public void attack() {
		System.out.println("���� ������˰ܾ���!");
	}

}
