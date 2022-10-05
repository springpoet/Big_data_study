package javastudy03;

import java.util.*;

public class HelloJava02_T {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		System.out.println("�� ĳ���� �� ��?");
		int count=s.nextInt();
		
		GameCharacter[] players = new GameCharacter[count];
		for(int i=0;i<players.length;i++) {
			System.out.println(i+1+"��° ĳ���� ������?");
			int lv=s.nextInt();
			if(lv<0) {
				i--;
				continue;
			}
			System.out.println("�ش� ĳ������ ������?");
			s.nextLine();
			String job=s.nextLine();
			System.out.println("�ش� ĳ������ ID��?");
			String id=s.nextLine();
			players[i]=new GameCharacter(id,job,lv);
//			players[i].setLevel(lv);
			
		}
		for (GameCharacter gameCharacter : players) {
			gameCharacter.printInfo();
		}
		
		ArrayList<GameCharacter> gamers=new ArrayList<GameCharacter>();
		
		while(gamers.size()!=count) {
			System.out.println("ĳ���� ���� ? ");
			int level=s.nextInt();
			if(level<0) {
				continue;
			}
			System.out.println("ĳ������ ���� ?");
			s.nextLine();
			String job=s.nextLine();
			System.out.println("ĳ���� ID?");
			String id=s.nextLine();
			gamers.add(new GameCharacter(id,job,level));
		}
	}
}
