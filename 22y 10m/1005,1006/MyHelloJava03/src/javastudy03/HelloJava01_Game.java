package javastudy03;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava01_Game {
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		ArrayList<GameCharacter> character=new ArrayList<GameCharacter>();
		int n=scan.nextInt();
		GameCharacter g1=new GameCharacter("청산당한사람","전사");
		GameCharacter g2=new GameCharacter("09714j","마법사");
		GameCharacter g3=new GameCharacter("3대티모","바텀도우미");
		
		g1.sayHello();
		System.out.println(g1.getId());
		System.out.println(g1.getJob());
		g1.attack();
		
		g2.sayHello();
		System.out.println();
		System.out.println(g2.getId());
		System.out.println(g2.getJob());
		g2.attack();
		
		System.out.println();
		g3.sayHello();
		System.out.println(g3.getId());
		System.out.println(g3.getJob());
		g3.attack();
		
		
		
		
	}
}
