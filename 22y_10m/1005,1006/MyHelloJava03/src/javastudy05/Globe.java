package javastudy05;

import javastudy04.Sphere;

public class Globe extends Sphere {

	public Globe(int r) {
		super(r);
		// TODO Auto-generated constructor stub
	}
	public void rollTheGlobe(String color) {
		this.Color=color;
		System.out.println("Áö±¸º» »ö±ò"+this.Color);
		spin();
	}
	public void setColor(String color) {
		this.Color=color;
	}
	public String getColor() {
		return this.Color;
	}

}
