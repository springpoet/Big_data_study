package javastudy01;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava01_Food {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Food> foods=new ArrayList<Food>();
		Scanner scan=new Scanner(System.in);
		
		Food f=new Food("ºñºö¹ä");
		Sushi s=new Sushi("¿¬¾îÃÊ¹ä",10000,"³ì»ö¿Í»çºñ");
		Food e=new EmoKase("ÃÖ¹Ì°æ",20000);
		
		f.setPrice(1000);
		foods.add(f);
		foods.add(s);
		foods.add(e);
		while(true) {
			System.out.println("Ãß°¡ÇÒ ¸Þ´º ¸í");
			String name=scan.nextLine();
			Food temp;
			if(name.equals("½º½Ã") || name.equals("Sushi")) {
				System.out.println("¾ó¸¶¾ß?");
				int price=scan.nextInt();
				scan.nextLine();
				System.out.println("¹«½¼ ÃÊ¹ä?");
				String Sushiname=scan.nextLine();
				System.out.println("¹«½¼ ¿Í»çºñ?");
				String wasabi=scan.nextLine();
				temp=new Sushi(Sushiname,price,wasabi);
				foods.add(temp);
			}
			else if(name.equals("Âî°³")||name.equals("Rice")) {
				System.out.println("¾ó¸¶¾ß?");
				int price=scan.nextInt();
				scan.nextLine();
				System.out.println("¹«½¼ Âî°³?");
				String Foodname=scan.nextLine();
				temp=new EmoKase(Foodname,price);
				foods.add(temp);
			}
			else {
				break;
			}
		}		
	}
}
