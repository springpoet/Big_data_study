package my.hello.javastudy;
import java.util.Scanner;

public class HelloJava01 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// 로또 프로그램
		System.out.println("Hello World");
		Scanner scan=new Scanner(System.in);
		int count=scan.nextInt();
		for(int k=0;k<count;k++) {
			
			int lotto[]=new int[7];
			for(int i=0;i<7;i++) {
				lotto[i]=(int)(Math.random()*45)+1;
				for(int j=0;j<i;j++) {
					if(lotto[i]==lotto[j]) {
						i--;
						break;
					}
				}
			}
			for(int i=0;i<6;i++) {
				for(int j=i+1;j<6;j++) {
					if(lotto[i]>lotto[j]) {
						int temp=lotto[i];
						lotto[i]=lotto[j];
						lotto[j]=temp;
					}
				}
			}
			System.out.println("로또 번호 :");
		
			for(int i=0;i<7;i++) {
			System.out.print(lotto[i]+" ");	
			}
			System.out.println();
			}
		}		
	}
