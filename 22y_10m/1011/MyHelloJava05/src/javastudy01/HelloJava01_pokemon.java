package javastudy01;

import java.util.ArrayList;
import java.util.List;

public class HelloJava01_pokemon {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Pikachu p=new Pikachu("������");
		p.charming();
		
		Bulbasaur b=new Bulbasaur();
		b.charming();
		b.fight();
		b.grow();
		
		Squirtle s=new Squirtle();
		s.charming();
		s.fight();
		s.grow();
		
		Pikachu Raichu=new Pikachu("�������Դϴ�.") {
			public void charming() {
				System.out.println(getName()+"�����������~");
			}
		
		};
		Raichu.charming();
		
		
		Pokemonable g=new Pokemonable() {
			public void grow() {
				System.out.println("�ٴ�ӿ��� �ڶ���.");
			}

			@Override
			public void charming() {
				// TODO Auto-generated method stub
				System.out.println("���ϲ����� ����");
			}

			@Override
			public void fight() {
				// TODO Auto-generated method stub
			System.out.println("���X���X�ź�");	
			}
		};
		g.charming();
		g.fight();
		g.grow();
		
		ArrayList<Integer> numbers=new ArrayList<Integer>();
		List<Integer> us=new ArrayList<Integer>();
		
		Pikachu pipi=p;
		pipi.setName("����׶�");
		System.out.println(p.getName());
	}

}
