package javastudy03;

public abstract class LeagueOfLegends {
	private String name;
	private String Runeterra;
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getRuneterra() {
		return Runeterra;
	}
	public void setRuneterra(String runeterra) {
		Runeterra = runeterra;
	}
	
	public LeagueOfLegends(String name, String Runeterra) {
		super();
		this.name=name;
		this.Runeterra=Runeterra;
	}
	public LeagueOfLegends() {};
	
	public void ChampInfo() {
		System.out.println("Ã¨ÇÇ¾ð ¸í : "+name);
		System.out.println("Ã¨ÇÇ¾ð ¼Ò¼Ó : "+Runeterra);
	}
	public void Q() {};
	public void W() {};
	public void E() {};
	public void R() {};
}
