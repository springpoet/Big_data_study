import java.util.*;
import java.lang.String;
class Clock2{
	private int hour;
	private int minute;
	private int second;
	
	public Clock2(int h,int m, int s) {
		this.hour=h;
		this.minute=m;
		this.second=s;
	}
	public void setTime(int h,int m, int s) {
		//해당 함수가 호출되면 얼마든지 값을 변경 가능
		this.hour=h;
		this.minute=m;
		this.second=s;
	}
	
	public int getHour() {return this.hour;}
	public int getMin() {return this.minute;}
	public int getSec() {return this.second;}

}
public class JavaQ1T {
	public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
	int hour=s.nextInt();
	int minute=s.nextInt();
	int second=s.nextInt();
	
	Clock2 c1=new Clock2(hour,minute,second);
	Clock2 c2=new Clock2(hour,minute,second);
	
	c2.setTime(12, 40, 0);
	
	int sub_h=c2.getHour()-c1.getHour();
	int sub_m=c2.getMin()-c1.getMin();
	int sub_s=c2.getSec()-c1.getSec();
	if(sub_h<0){
		sub_h+=24;
	}
	if(sub_m<0) {
		sub_h-=1;
		sub_m+=60;
	}
	if(sub_s<0) {
		sub_m-=1;
		sub_s+=60;
	}
	
	System.out.println(String.format("%02d","현재 시각은 "+c1.getHour()+"시 "+c1.getMin()+"분 "+c1.getSec()+"초 입니다."));
	System.out.println(String.format("%02d","점심 시간은 "+c2.getHour()+"시 "+c2.getMin()+"분 "+c2.getSec()+"초 입니다."));
	System.out.println(String.format("%02d","점심 시간까지 남은 시간은 "+sub_h+"시 "+sub_m+"분 "+sub_s+"초 입니다."));
	}
}
