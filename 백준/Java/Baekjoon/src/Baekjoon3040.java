import java.util.Scanner;

public class Baekjoon3040 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		int[] arr= new int[9];
		int sum=0;
		int a=0;
		int b=0;
		
		for(int i=0;i<9;i++){
			arr[i]=scan.nextInt();
			sum+=arr[i];
		}
		for(int i=0;i<9;i++) {
			for(int j=0;j<9;j++) {
				if(sum-arr[i]-arr[j]==100) {
					a=i;
					b=j;
				}
			}
		}
		for(int i=0;i<9;i++) {
				if(i == a || i == b) {
					continue;
			}
			System.out.println(arr[i]);
		}
	}
}
