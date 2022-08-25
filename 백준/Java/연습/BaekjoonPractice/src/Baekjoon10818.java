import java.util.*;

public class Baekjoon10818 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		int n=scan.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++) {
			arr[i]=scan.nextInt();
		}
		scan.close();
		Arrays.sort(arr);
		System.out.println(arr[0]+" "+arr[n-1]);
	}
}
