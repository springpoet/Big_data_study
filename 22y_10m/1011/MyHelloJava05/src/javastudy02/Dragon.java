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
		System.out.println("���� ���ϰ� �׹߷� �ٱ�");
	}

	@Override
	public void jog() {
		// TODO Auto-generated method stub
	System.out.println("�뵵 �׹߷� �ȴ´�!");	
	}

	@Override
	public void Fly() {
		// TODO Auto-generated method stub
		System.out.println("���� ���� ����");
	}

	@Override
	public void FlapWing() {
		// TODO Auto-generated method stub
		System.out.println("�����ؼ� ���� ����");
	}
	public void sleep() {
		System.out.println("�ڴµ� �ƿ�� ȥ����");
	}
	public void polymoph() {
		System.out.println("�ٸ��ɷ� �����ϱ�");
	}

}
