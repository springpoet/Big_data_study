package javastudy01;

import java.util.ArrayList;
import java.util.List;

public class HelloJava01_pokemon {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Pikachu p=new Pikachu("ª‡É¯√Ú");
		p.charming();
		
		Bulbasaur b=new Bulbasaur();
		b.charming();
		b.fight();
		b.grow();
		
		Squirtle s=new Squirtle();
		s.charming();
		s.fight();
		s.grow();
		
		Pikachu Raichu=new Pikachu("∂Û¿Ã√Ú¿‘¥œ¥Ÿ.") {
			public void charming() {
				System.out.println(getName()+"∂Û¿Ã√Ú∂Û¿Ã√Ú~");
			}
		
		};
		Raichu.charming();
		
		
		Pokemonable g=new Pokemonable() {
			public void grow() {
				System.out.println("πŸ¥Âº”ø°º≠ ¿⁄∂ı¥Ÿ.");
			}

			@Override
			public void charming() {
				// TODO Auto-generated method stub
				System.out.println("≤®∫œ≤Æ±∏º’ µ•Ω∫");
			}

			@Override
			public void fight() {
				// TODO Auto-generated method stub
			System.out.println("¿∏õX¿∏õX∞≈∫œ");	
			}
		};
		g.charming();
		g.fight();
		g.grow();
		
		ArrayList<Integer> numbers=new ArrayList<Integer>();
		List<Integer> us=new ArrayList<Integer>();
		
		Pikachu pipi=p;
		pipi.setName("≥Î∂ı∂◊∂Ï");
		System.out.println(p.getName());
	}

}
