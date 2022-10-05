package javastudy03;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava02_Game {
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		ArrayList<GameCharacter> character=new ArrayList<GameCharacter>();
		character.add(new GameCharacter("청산당한사람","전사",44));
		character.add(new GameCharacter("09714j","마법사",12));
		character.add(new GameCharacter("3대티모","바텀도우미",27));
		for(int i=0;i<3;i++) {
			character.get(i).printInfo();
		}
	}
}
