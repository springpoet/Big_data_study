package javastudy01;

import java.util.ArrayList;
import java.util.Scanner;

public class HelloJava01_Food {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Food> foods=new ArrayList<Food>();
		Scanner scan=new Scanner(System.in);
		
		Food f=new Food("�����");
		Sushi s=new Sushi("�����ʹ�",10000,"����ͻ��");
		Food e=new EmoKase("�ֹ̰�",20000);
		
		f.setPrice(1000);
		foods.add(f);
		foods.add(s);
		foods.add(e);
		while(true) {
			System.out.println("�߰��� �޴� ��");
			String name=scan.nextLine();
			Food temp;
			if(name.equals("����") || name.equals("Sushi")) {
				System.out.println("�󸶾�?");
				int price=scan.nextInt();
				scan.nextLine();
				System.out.println("���� �ʹ�?");
				String Sushiname=scan.nextLine();
				System.out.println("���� �ͻ��?");
				String wasabi=scan.nextLine();
				temp=new Sushi(Sushiname,price,wasabi);
				foods.add(temp);
			}
			else if(name.equals("�")||name.equals("Rice")) {
				System.out.println("�󸶾�?");
				int price=scan.nextInt();
				scan.nextLine();
				System.out.println("���� �?");
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
