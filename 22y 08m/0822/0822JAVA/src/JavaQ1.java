import java.util.*;

class Clock{
	private int hour;
	private int min;
	private int sec;
	
	public int getHour() {return this.hour;}
	public int getMin() {return this.min;}
	public int getSec() {return this.sec;}
	public void setHour(int h) {this.hour=h;}
	public void setMin(int m) {this.min=m;}
	public void setSec(int s) {this.sec=s;}
	
	public Clock(int h,int m, int s) {
		this.hour=h;
		this.min=m;
		this.sec=s;
	}
	public Clock() {
		this.hour=00;
		this.min=00;
		this.sec=00;
	}
}


public class JavaQ1 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		Clock c1=new Clock(scan.nextInt(),scan.nextInt(),scan.nextInt());
		Clock c2=new Clock(12,40,00);

	
		int difHour=c2.getHour()-c1.getHour();
		int difMin=c2.getMin()-c1.getMin();
		int difSec=c2.getSec()-c1.getSec();
		
		if(difMin<0) {
			difHour-=1;
			difMin+=60;
		}
		if(difSec<0) {
			difMin-=1;
			difSec+=60;
		}
		System.out.println("현재 시간은 "+c1.getHour()+"시 "+c1.getMin()+"분 "+c1.getSec()+"초 입니다.");
		System.out.println("점심 시간은 "+c2.getHour()+"시 "+c2.getMin()+"분 "+c2.getSec()+"초 입니다.");
		System.out.println("점심 시간까지 남은 시간은 "+difHour+"시 "+difMin+"분 "+difSec+"초 입니다.");
	}
}
