package javastudy04;
import javastudy02.Circle;
public class Sphere extends Circle{

	public Sphere(int r) {
		super(r);
		// TODO Auto-generated constructor stub
	}
	
	public double getvolume() {
		return (4/3)*getPI()*Math.pow(getR(), 3);
	}
	
	
	protected String Color;
	protected void spin() {
		System.out.println("ºù±Ûºù±Û");
	}
}
