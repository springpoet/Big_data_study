import java.util.Scanner;

public class Baekjoon10987 
{
	public static void main(String args[])
	{
		int sum=0;
		Scanner sc=new Scanner(System.in);
		String arr=sc.nextLine();
		for(int i=0;i<arr.length();i++)
		{
			if(arr.charAt(i)=='a'||arr.charAt(i)=='e'||arr.charAt(i)=='i'||arr.charAt(i)=='o'||arr.charAt(i)=='u')
			{
				sum++;
			}
		}
    	System.out.println(sum);
	}
}
