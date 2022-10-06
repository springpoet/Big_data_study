package javastudy07;

import java.util.ArrayList;

import javastudy03.GameCharacter;

public class HelloJava02 {

	public static void main(String[] args) {
		
		ArrayList<GameCharacter> players=new ArrayList<GameCharacter>();
		
		players.add(new Novice());
		players.add(new Magician());
		players.add(new GameCharacter());
	}

}
