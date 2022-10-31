package javastudy02;

public class Dragon extends Cryptid implements Fliable, Runsable {
	private String species;
	
	public String getSpecies() {
		return species;
	}

	public void setSpecies(String species) {
		this.species = species;
	}

	@Override
	public void Run() {
		// TODO Auto-generated method stub
		System.out.println("용이 추하게 네발로 뛰기");
	}

	@Override
	public void jog() {
		// TODO Auto-generated method stub
	System.out.println("용도 네발로 걷는다!");	
	}

	@Override
	public void Fly() {
		// TODO Auto-generated method stub
		System.out.println("용은 어케 나누");
	}

	@Override
	public void FlapWing() {
		// TODO Auto-generated method stub
		System.out.println("변신해서 날개 없다");
	}
	public void sleep() {
		System.out.println("자는데 꺠우면 혼난다");
	}
	public void polymoph() {
		System.out.println("다른걸로 변신하깅");
	}

}
