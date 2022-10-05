package javastudy04;

import javastudy01.Rectangle;

public class Cuboid extends Rectangle {
	private int z;
	
	public Cuboid(int z) {
		super();
		this.z=z;
	}
	
	public int getCuvoidVolumn() {
		return getW()*getH()*z;
	}
}
