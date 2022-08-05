import java.util.Scanner;
public class Baekjoon10818{

	public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
				//10818답안
		int num=s.nextInt();
		int input[]=new int [num];
		for(int i=0;i<num;i++)
		{
			input[i]=s.nextInt();
		}
		int max=input[0];
		int min=input[0];
		for(int i=0;i<num;i++)
		{
			if(max<input[i])
			{
				max=input[i];
			}
			if(min>input[i]) 
			{
				min=input[i];
			}
		}
		System.out.println(min);
		System.out.println(max);
	}

}
