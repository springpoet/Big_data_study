package javastudy03;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava02_Game {
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		ArrayList<GameCharacter> character=new ArrayList<GameCharacter>();
		character.add(new GameCharacter("û����ѻ��","����",44));
		character.add(new GameCharacter("09714j","������",12));
		character.add(new GameCharacter("3��Ƽ��","���ҵ����",27));
		for(int i=0;i<3;i++) {
			character.get(i).printInfo();
		}
	}
}
