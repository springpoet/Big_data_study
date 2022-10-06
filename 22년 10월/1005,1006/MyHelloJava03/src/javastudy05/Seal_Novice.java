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
		System.out.println("신문지 덮고 자라!");
	}

	public void attack() {
		System.out.println("마법 고오오옹겨어어억!");
	}
}
