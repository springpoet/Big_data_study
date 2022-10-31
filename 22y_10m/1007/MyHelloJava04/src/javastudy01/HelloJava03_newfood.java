package javastudy01;

public class HelloJava03_newfood {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Food f=new Food("해물라면",15000);
		Food f2=new Noodle("이연복짜장",50000);
		Noodle f3=new Noodle("내라면",7500);
		
		f.eat();
		f2.eat();
		f3.eat();
	}

}
