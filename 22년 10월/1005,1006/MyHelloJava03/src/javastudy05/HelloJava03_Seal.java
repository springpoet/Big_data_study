package javastudy05;

import java.util.ArrayList;
import java.util.Scanner;

import javastudy03.GameCharacter;

public class HelloJava03_Seal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		ArrayList<GameCharacter> characters=new ArrayList<GameCharacter>();
		ArrayList<Seal_Magician> magicians=new ArrayList<Seal_Magician>();
		ArrayList<Seal_Novice> novices=new ArrayList<Seal_Novice>();
		
		characters.add(new GameCharacter("사람1", "마법사"));
		characters.add(new GameCharacter("사람2", "전사"));
		characters.add(new GameCharacter("사람3","마루쉐"));
	
		for(int i=0;i<characters.size();i++) {
			characters.get(i).setLevel(1+10+i);
		}
		for (GameCharacter GameCharacter : characters) {
			GameCharacter.attack();
			GameCharacter.printInfo();
		}
		
		Seal_Magician m1=new Seal_Magician();
		
	}

}
