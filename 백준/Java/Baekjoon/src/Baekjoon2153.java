import java.util.*;

public class Baekjoon2153 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		String arr=scan.nextLine();
		int arrSum=0;
		
		for(int i=0;i<arr.length();i++) {
			//해당 인덱스의 글자를 하나로 분리함
			char alpha=arr.charAt(i);
			//그 문자가 대문자일 경우 -38을 하고 sum에 더함
			if(alpha>='A' && alpha<='Z') {
				arrSum +=(int)alpha-38;
			}
			//그 문자가 소문자일 경우 -96을 하고 sum에 더함
			if(alpha>='a' && alpha<='z') {
				arrSum +=(int)alpha-96;
			}
		}
		
		//소수인지 체크하는 변수
		int primeword = 0;
		
		
		for(int i=2;i<=arrSum;i++) {
			//1부터 합까지 하나하나 나눴을 때 0이되는게 있으면 소수가 아님
			if(i<arrSum && arrSum % i ==0) {
				break;
			}
			//1부터 합까지 하나하나 나눴을 때 0이 되는게 없으면 소수가 맞음
			//나눠지는 수가 i 하나밖에 없고 i가 합인 경우 소수이다.
			if(i==arrSum && arrSum % i ==0) {
				primeword = 1;
			}
		}
		if(primeword==1 || arrSum ==1) {
			System.out.println("It is a prime word.");
		}
		else {
			System.out.println("It is not a prime word.");
		}
		scan.close();
	}
}
