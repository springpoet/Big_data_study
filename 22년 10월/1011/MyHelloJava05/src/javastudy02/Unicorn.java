package javastudy02;

public class Unicorn extends Cryptid implements Fliable, Runsable {
	private String Color;
	
	public String getColor() {
		return Color;
	}

	public void setColor(String color) {
		Color = color;
	}

	@Override
	public void Run() {
		// TODO Auto-generated method stub
		System.out.println("열심히 뜁니다!!");
	}

	@Override
	public void jog() {
		// TODO Auto-generated method stub
		System.out.println("가볍게 조깅을 합니다!!");
	}

	@Override
	public void Fly() {
		// TODO Auto-generated method stub
		System.out.println("우아하게 납니당");
	}

	@Override
	public void FlapWing() {
		// TODO Auto-generated method stub
		System.out.println("우아하게 퍼덕거려용");
	}

	public void sleep() {
		System.out.println("영물은 잠을 안자용");
	}

	public void cry() {
		System.out.println(Color+"빌 털을 흩날린다.");
		System.out.println("이히히히히힝");
	}
}
