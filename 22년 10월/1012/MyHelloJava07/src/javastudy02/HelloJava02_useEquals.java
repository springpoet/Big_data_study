package javastudy02;

public class HelloJava02_useEquals {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String a="�̵���";
		String b="�̵���";
		String c=new String("�躸��");
		String d=new String("�躸��");
		
		Student s1=new Student("�̵���",340);
		Student s2=new Student("�̵���",340);
		System.out.println(a==b); //t
		System.out.println(c==d); //f : c�� d�� �����ʹ� ������ �ٸ� ��ġ�� ����ħ(��������)
		System.out.println(s1==s2); //f
		
		System.out.println(a.equals(b)); //t
		System.out.println(c.equals(d)); //t 
		System.out.println(s1.equals(s2)); //f
		
		Worker w1=new Worker("����ȣ","001");
		Worker w2=new Worker("����ȣ","001");
		Worker w3=new Worker("����ȣ","002");
		
		System.out.println(w1.equals(w2)); //t
		System.out.println(w2.equals(w3)); //f
		
		
	}

}
