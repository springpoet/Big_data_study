package javastudy03;
import java.util.*;
public class Getjob {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s=new Scanner(System.in);
		
		int sum=0;
		for(int i=3;i<8;i++) {
			if(i%2==1) {
				sum+=i;
			}
		}
		System.out.println(sum);

		System.out.println("���ڿ� �Է�");
		String str=s.nextLine();
		String newstr="";
		for(int i=str.length()-1;i>-1;i--) {
			newstr+=str.charAt(i);
		}
		System.out.println(newstr);
		
		System.out.println("����Ʈ�� �Է�");
		int num=s.nextInt();
		int result=num*8;
		
		System.out.println(num+"byte = "+result+"bit");
	}

}
