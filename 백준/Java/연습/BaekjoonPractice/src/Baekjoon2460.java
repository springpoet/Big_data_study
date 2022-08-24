import java.util.Scanner;

public class Baekjoon2460 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		int passenger=0;
		int max=0;
		for(int i = 0 ; i < 10 ; i++) {
			int out = scan.nextInt();
			int in = scan.nextInt();
			passenger-=out;
			passenger+=in;
			if(passenger>max) {
				max=passenger;
			}
		}
		System.out.println(max);
	}
}
