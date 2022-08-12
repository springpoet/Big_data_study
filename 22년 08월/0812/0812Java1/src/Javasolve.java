import java.util.Scanner;

class Ave{
	public int korean;
	public int math;
	public int english;
	public int society;
	public int science;
	
	public Ave() {
		this.korean=50;
		this.math=50;
		this.english=50;
		this.society=50;
		this.science=50;
	}
	public Ave(int kor,int math,int eng) {
		this.korean=kor;
		this.math=math;
		this.english=eng;
		this.society=50;
		this.science=50;
	}
	public Ave(int kor, int math, int eng, int soc, int sci) {
		this.korean=kor;
		this.math=math;
		this.english=eng;
		this.society=soc;
		this.science=sci;
	}
	
	public double getAve(int kor,int math, int eng) {
		return (double)(kor+math+eng)/3;
	}
	public double getAve(int kor,int math, int eng, int soc,int sci) {
		return (double)(kor+math+eng+soc+sci)/5;
	}
}
public class Javasolve {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		Ave ave[]=new Ave[2];
		double average=0;
		for(int i=0;i<2;i++) {
			int kor=scan.nextInt();
			int math=scan.nextInt();
			int eng=scan.nextInt();
			int soc=scan.nextInt();
			int sci=scan.nextInt();
			average=ave[i].getAve(kor, math, eng,soc,sci);
			System.out.println("국영수사과의 평균 : "+average);
		}
	}
}
