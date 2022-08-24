import java.util.*;


public class Baekjoon2480 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		int x=scan.nextInt();
		int y=scan.nextInt();
		int z=scan.nextInt();

		if(x != y && y!=z && x != z) {
			int max;
			if ( x >y) {
				if (z>x) {
					max=z;					
				}
				else {
					max=x;
				}
			}
			else {
				if(z>y) {
					max=z;
				}
				else {
					max=y;
				}
			}
			System.out.println(max*100);
		}
		else {
			if(x==y&&x==z) {
				System.out.println(10000+x*1000);
			}
			else {
				if(x==y ||x==z) {
					System.out.println(1000+x*100);

				}
				else {
					System.out.println(1000+y*100);
				}
			}
		}
	}
}
