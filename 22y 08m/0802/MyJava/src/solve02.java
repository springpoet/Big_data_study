import java.util.Scanner;
public class solve02 {
	public static void main(String args[]) 
	{
		//1번.
		Scanner s=new Scanner(System.in);
		System.out.println("소문자로 단어 입력");
		String word=s.next();
		int alphabet[]=new int[26];
		
		for(int i=0;i<word.length();i++)
		{
			int index=word.charAt(i)-(int)'a';
			alphabet[index]++;
		}
		for(int i=0;i<alphabet.length;i++)
		{
			if(alphabet[i]!=0)
			{
				System.out.println(""+(char)(i+97)+"는"+(alphabet[i])+"개 있습니다.");
			}
		}
		
		//2번.
		System.out.println();
		String word2=s.next();
		int alphabet2[]=new int[26];
		
		for(int i=0;i<word2.length();i++)
		{
			int index=word2.charAt(i)-(int)'a';
			
		}
		
		
	}
}
