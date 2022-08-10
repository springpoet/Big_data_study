import java.util.Scanner;

public class Baekjoon2440 
{
	public static void main(String args[])
	{
	Scanner s=new Scanner(System.in);
	int arr=s.nextInt();
	for(int i=arr;i>0;i--)
		{
			for(int j=1;j<=i;j++)
				{			
				System.out.print("*");
				}
			System.out.println();
		}
	}
}
