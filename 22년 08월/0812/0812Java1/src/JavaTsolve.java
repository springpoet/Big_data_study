import java.util.Scanner;

class Score{
	public int Korean; 
	public int Math;
	public int English;
	public int Society;
	public int Science;
	
	public Score() {
		this.Korean=50;
		this.Math=50;
		this.English=50;
		this.Society=50;
		this.Science=50;
	}
	public Score(int k, int m, int e) {
		this.Korean=k;
		this.Math=m;
		this.English=e;
		this.Society=50;
		this.Science=50;
	}
	public Score(int k, int m, int e,int so,int sc) {
		this.Korean=k;
		this.Math=m;
		this.English=e;
		this.Society=so;
		this.Science=sc;
	}
	
	//3개 과목 : <국영수> 평균 반환하는 함수
	//1.매개변수 이용해 값 구함
	public double getAve3(int k, int m ,int e) {
		return (double)(k+m+e)/3;
	}
	//2.객체 자체의 값을 통해서 값 구함
	public double getAverage3() {
		return (double)(this.Korean+this.Math+this.English)/3;
	}
	//1.
	public double getAve5(int k,int m, int e, int so, int sc) {
		return (double)(k+m+e+so+sc)/5;
	}
	//2.
	public double getAverage5() {
		return (double)(this.Korean+this.Math+this.English+this.Society+this.Science)/5;
	}
	
}
public class JavaTsolve {
	public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
		
		System.out.println("s1은 입력없이 자동으로 생성");
		Score s1=new Score();	// 5과목 모두 50점으로 초기화됨
		
		// 3개 입력받고 생성
		System.out.println("s2의 점수 3개 입력");
		System.out.print("국어 점수: ");	int a=s.nextInt();	// 국어점수 입력받음
		System.out.print("수학 점수: ");	int b=s.nextInt();	// 수학점수 입력받음
		System.out.print("영어 점수: ");	int c=s.nextInt();	// 영어점수 입력받음
		Score s2=new Score(a,b,c);	// 국수영은 입력값으로, 사회 과학은 50점으로
		
		// 5개 입력받고 생성
		System.out.println("s3의 점수 5개 입력");
		System.out.print("국어 점수: ");	a=s.nextInt();
		System.out.print("수학 점수: ");	b=s.nextInt();
		System.out.print("영어 점수: ");	c=s.nextInt();
		System.out.print("사회 점수: ");	int d=s.nextInt();
		System.out.print("과학 점수: ");	int e=s.nextInt();
		Score s3=new Score(a,b,c,d,e);	// 국수영사과 모두 입력값으로 초기화
		
		// 각 객체들의 국영수 평균, 국영수사과 평균 순차적으로 출력
		// s1에 대한 평균들 출력
		double result=s1.getAve3(s1.Korean, s1.Math, s1.English);
		System.out.println("s1의 국영수 평균은 "+result);
		result=s1.getAve5(s1.Korean, s1.Math, s1.English, s1.Society, s1.Science);
		System.out.println("s1의 국영수사과 평균은 "+result);
		
		// s2에 대한 평균들 출력
		result=s2.getAverage3();
		System.out.println("s2의 국영수 평균은 "+result);
		result=s2.getAverage5();
		System.out.println("s3의 국영수사과 평균은 "+result);
		
		// s3에 대한 평균들 출력
		result=s3.getAverage3();
		System.out.println("s3의 국영수 평균은 "+result);
		result=s3.getAverage5();
		System.out.println("s3의 국영수사과 평균은 "+result);
	}
}