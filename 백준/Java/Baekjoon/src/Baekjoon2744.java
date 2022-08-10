import java.util.Scanner;

public class Baekjoon2744 {
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		String str=s.nextLine();
		
		char[] arr;
		arr=str.toCharArray();
		
		for(int i=0;i<arr.length;i++)
		{
			if(65<=arr[i]&&arr[i]<=90)
			{
				arr[i]=(char)(arr[i]+32);
				continue;
			}
			if(97<=arr[i]&&arr[i]<=122)
			{
				arr[i]=(char)(arr[i]-32);
				continue;
			}
		}
		System.out.println(arr);
		
	}

}
