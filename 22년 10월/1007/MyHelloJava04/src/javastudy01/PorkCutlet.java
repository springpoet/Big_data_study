package javastudy01;

public class PorkCutlet extends Food {

	public PorkCutlet(String name, int price) {
		super(name, price);
		// TODO Auto-generated constructor stub
	}

	public void eat() {
		// TODO Auto-generated method stub
		System.out.println(getName() + "�� �ְ��� ���");
		System.out.println(getPrice() + "�� ���� �Ʊ��� ����");
	}

	public void eat(int count) {
		System.out.println(count + "�� �Ծ���");
	}

	public void eat(String source) {
		System.out.println(source + "�ҽ��� �Ἥ ����");
	}
}
