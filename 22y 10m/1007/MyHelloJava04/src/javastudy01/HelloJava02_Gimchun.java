package javastudy01;

public class HelloJava02_Gimchun {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Food f1=new Food("�̸�",5000);
		Food f2=new PorkCutlet("�����",8000);
		PorkCutlet f3=new PorkCutlet("���",9000);
		Noodle f4=new Noodle("���",4000);
		f1.eat();
		f2.eat();
		f3.eat();
		f4.eat("û�����");
		if(f2 instanceof PorkCutlet) {
			((PorkCutlet)f2).eat(5);
		}
		if(f2 instanceof PorkCutlet) {
			((PorkCutlet)f2).eat("�ʰ�����");
		}
		if(f4 instanceof Noodle) {
			((Noodle)f4).eat();
			((Noodle)f4).eat("û�����");
		}
		f3.eat(10);
		f3.eat("���ݸ�");
	}

}
