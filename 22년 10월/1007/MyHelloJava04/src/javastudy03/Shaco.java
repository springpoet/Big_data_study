package javastudy03;

public class Shaco extends LeagueOfLegends {
	public Shaco(String name,String Runeterra) {
		// TODO Auto-generated constructor stub
		super(name, Runeterra);
	}

	public void Q() {
		System.out.println("Q : 속임수 사용");
	};

	public void W() {
		System.out.println("W : 깜짝 상자 사용");
	};

	public void E() {
		System.out.println("E : 양날 독 사용");
	};

	public void R() {
		System.out.println("R : 환각 사용");
	};
	public void act() {
		System.out.println("적혀진 대본대로 하라고!");
		System.out.println("왜 애드립을 해 ! ");
	}
}
