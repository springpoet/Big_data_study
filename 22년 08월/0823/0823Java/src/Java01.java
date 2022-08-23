import java.util.*;

class Cal{
private char ch;

public Cal(char c) {
	this.ch=c;
}

public char getCh() {return this.ch;}
public int sum(int a, int b) {return a+b;}
public int sub(int a, int b) {return a-b;}
public int mul(int a, int b) {return a*b;}
public int div(int a, int b) {return a/b;}
public int rest(int a, int b) {return a%b;}
}

public class Java01 {
	public static void main(String args[]) {
	Scanner scan=new Scanner(System.in);
	Cal arr[]=new Cal[5];
	arr[0]=new Cal('+');
	arr[1]=new Cal('-');
	arr[2]=new Cal('*');
	arr[3]=new Cal('/');
	arr[5]=new Cal('%');
	
	while(true) {
		int a=scan.nextInt();
		int b=scan.nextInt();
		char c=scan.next().charAt(0);
		if(a==0 &&b==0) {
			break;
		}
		int result=-1;
		if(c==arr[0].getCh()) {result=arr[0].sum(a, b);}
		else if(c==arr[1].getCh()) {result=arr[1].sub(a, b);}
		else if(c==arr[2].getCh()) {result=arr[2].mul(a, b);}
		else if(c==arr[3].getCh()) {result=arr[3].div(a, b);}
		else if(c==arr[4].getCh()) {result=arr[4].rest(a,b);}
		System.out.println("결과는 "+result);
		}
	}
}

