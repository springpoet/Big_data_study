import java.util.*;

public class Baekjoon5613 {
	public static void main(String args[]) {
		Scanner scan=new Scanner(System.in);
		int result=scan.nextInt();
		while(true) {
			String calcul=scan.nextLine();
			if(calcul.equals("=")) {
				break;
			}
			switch(calcul) {
			case "+":
				result+=scan.nextInt();
				break;
			case "-":
				result-=scan.nextInt();
				break;
			case "*":
				result*=scan.nextInt();
				break;
			case "/":
				result/=scan.nextInt();
				break;
			default:
				break;
			}
		}
		System.out.println(result);
		scan.close();
	}

}
