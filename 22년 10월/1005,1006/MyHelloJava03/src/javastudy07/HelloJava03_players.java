package javastudy07;

import java.util.ArrayList;

import javastudy03.GameCharacter;

public class HelloJava03_players {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<GameCharacter> players = new ArrayList<GameCharacter>();
		GameCharacter g = new GameCharacter();
		g.setJob("프로그래머");
		g.setId("조코딩");
		g.setLevel(100);
		players.add(g);

		Novice n = new Novice();
		n.setJob("백수");
		n.setId("왼손");
		n.setHp(10);
		n.setLevel(1);
		players.add(n);

		GameCharacter m = new Magician();
		m.setJob("대마법사");
		m.setId("모태솔로이동준");
		m.setLevel(28);
		if (m instanceof Magician) {
			Magician temp = (Magician) m;
			temp.setMp(1000);
			((Magician) m).setMp(1000);
		}
		players.add(m);

		players.add(new Worrior());
		players.get(players.size() - 1).setJob("키보드전사");
		players.get(players.size() - 1).setId("네이버의논객");
		players.get(players.size() - 1).setLevel(7);
		if (players.get(players.size() - 1) instanceof Worrior) {
			Worrior w = (Worrior) players.get(players.size() - 1);
			w.setHp(1200);
			w.setPower(5000);
		}
		for (GameCharacter gameCharacter : players) {
			gameCharacter.printInfo();
			gameCharacter.attack();
			if (gameCharacter instanceof Novice) {
				((Novice) gameCharacter).sleep();
				if (gameCharacter instanceof Worrior) {
					((Worrior) gameCharacter).punch();
				}

			} else if (gameCharacter instanceof Magician) {
				((Magician) gameCharacter).magicArrow();
			}
		}
	}
}
