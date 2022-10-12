package javastudy02;

public class HelloJava02_useEquals {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String a="이동준";
		String b="이동준";
		String c=new String("김보규");
		String d=new String("김보규");
		
		Student s1=new Student("이동준",340);
		Student s2=new Student("이동준",340);
		System.out.println(a==b); //t
		System.out.println(c==d); //f : c와 d의 데이터는 같지만 다른 위치를 가르침(동명이인)
		System.out.println(s1==s2); //f
		
		System.out.println(a.equals(b)); //t
		System.out.println(c.equals(d)); //t 
		System.out.println(s1.equals(s2)); //f
		
		Worker w1=new Worker("박지호","001");
		Worker w2=new Worker("박지호","001");
		Worker w3=new Worker("박지호","002");
		
		System.out.println(w1.equals(w2)); //t
		System.out.println(w2.equals(w3)); //f
		
		
	}

}
