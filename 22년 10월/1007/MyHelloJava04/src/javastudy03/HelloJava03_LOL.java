package javastudy03;

public class HelloJava03_LOL {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Shaco s1=new Shaco("����","���׶�");
		s1.Q();
		s1.W();
		s1.E();
		s1.R();
		s1.act();
		LeagueOfLegends temp=new LeagueOfLegends() {
			public void ChampInfo() {
				System.out.println("���� ���� è�Ǿ�");
				System.out.println("è�Ǿ� �� : "+getName());
				System.out.println("è�Ǿ� �Ҽ� : "+getRuneterra());
			}
		};
		temp.setName("û��");
		temp.setRuneterra("�뱸");
		temp.ChampInfo();
	}
}
