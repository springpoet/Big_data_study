package javastudy03;

public class MyCircle {
	private int r;
	private final double pi=3.14;
	
	public int getR() {
		return r;
	}
	public void setR(int r) {
		if(r<=0) {
			this.r = r;
		}
		else {
			this.r=r;	
		}
	}
	public double getArea() {
		if(r<=0) {
			System.out.println("반지름 값 확인 바람");
			return 0;
		}
		return r*r*pi;
	}
	public double getRound() {
		if(r<=0) {
			System.out.println("반지름 값 확인 바람");
			return 0;
		}
		return 2*r*r*pi;
	}
	
	public MyCircle(int r) {
		setR(r);
	}
	
	public MyCircle() {
		
	}
	
	
	
	
}
