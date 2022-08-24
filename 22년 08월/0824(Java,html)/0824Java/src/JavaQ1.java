import java.util.Scanner;

class Point{
	private int x;
	private int y;
	
	public Point(int x, int y) {
		this.x=x;
		this.y=y;
	}
	public int getX() {return this.x;}
	public int getY() {return this.y;}
	public void setX(int x) {this.x=x;}
	public void setY(int y) {this.y=y;}
	
	public void print() {
		System.out.println("위치 정보");
		System.out.println("X 좌표 : "+this.x);
		System.out.println("Y 좌표 : "+this.y);
	}
	
}

class ColorPoint extends Point{
	private String color;
	
	public ColorPoint (int x, int y, String c) {
		super(x,y);
		this.color=c;
	}
	
	public void print() {
		System.out.println(" 총 정보 ");
		System.out.println("X 좌표 : "+this.getX());
		System.out.println("Y 좌표 : "+this.getY());
		System.out.println("색상 : "+this.color);
	}
	
}
public class JavaQ1 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		
		Point p1=new Point(scan.nextInt(),scan.nextInt());
		ColorPoint c1=new ColorPoint(scan.nextInt(),scan.nextInt(),scan.nextLine());
		System.out.println();
		p1.print();
		System.out.println();
		c1.print();
		System.out.println();
		
		int x=scan.nextInt();
		int y=scan.nextInt();
		String z=scan.nextLine();
		Point p2=new Point(x,y);
		ColorPoint c2=new ColorPoint(x,y,z);
		System.out.println();
		p2.print();
		System.out.println();
		c2.print();
	}
}
