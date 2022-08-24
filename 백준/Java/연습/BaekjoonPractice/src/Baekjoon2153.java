import java.util.Scanner;

public class Baekjoon2153 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		
		String word=scan.nextLine();
		int wordSum=0;
		
		for(int i = 0; i < word.length();i++) {
			char alpha=word.charAt(i);
			if(alpha >= 'A' && alpha<='Z') {
				wordSum+=(int)alpha-38; 
			}
			if(alpha >='a' && alpha<='z') {
				wordSum+=(int)alpha-96;
			}
		}
		
		int primeword=0;
		
		for(int i = 2; i <= wordSum ; i++) {
			if(wordSum==1 && wordSum % i == 0) {
				break;
			}
			if(i == wordSum && wordSum % i ==0) {
				primeword=1;
			}
		}
		
		if(primeword == 1 || wordSum == 1) {
			System.out.println("It is a prime word.");
		}
		else {
			System.out.println("It is not a prime word.");
		}
		scan.close();
	}
}
