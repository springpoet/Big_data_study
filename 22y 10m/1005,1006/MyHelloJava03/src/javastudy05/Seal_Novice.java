package javastudy05;

import javastudy03.GameCharacter;

public class Seal_Novice extends GameCharacter {
	private int hp;
	
	public Seal_Novice() {
		super();
	}
	
	public int getHp() {
		return hp;
	}

	public void setHp(int hp) {
		this.hp = hp;
	}
	
	public void sleep() {
		System.out.println("�Ź��� ���� �ڶ�!");
	}

	public void attack() {
		System.out.println("���� ������˰ܾ���!");
	}
}
