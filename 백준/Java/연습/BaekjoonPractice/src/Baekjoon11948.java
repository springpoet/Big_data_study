import java.util.*;

public class Baekjoon11948 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		int score[]=new int[6];
		int sum=0;
		for(int i=0;i<6;i++) {
			score[i]=scan.nextInt();
		}
		Arrays.sort(score,0,4);
		Arrays.sort(score,4,6);
		
		for(int i=1;i<4;i++) {
			sum+=score[i];
		}
		sum+=score[5];
		
		System.out.println(sum);
	}
}
