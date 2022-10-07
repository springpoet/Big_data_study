package javastudy03;

public class HelloJava03_LOL {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Shaco s1=new Shaco("샤코","룬테라");
		s1.Q();
		s1.W();
		s1.E();
		s1.R();
		s1.act();
		LeagueOfLegends temp=new LeagueOfLegends() {
			public void ChampInfo() {
				System.out.println("내가 만든 챔피언");
				System.out.println("챔피언 명 : "+getName());
				System.out.println("챔피언 소속 : "+getRuneterra());
			}
		};
		temp.setName("청산");
		temp.setRuneterra("대구");
		temp.ChampInfo();
	}
}
