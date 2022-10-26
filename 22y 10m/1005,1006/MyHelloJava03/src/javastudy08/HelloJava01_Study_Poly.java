package javastudy08;

import java.util.ArrayList;

import javastudy03.GameCharacter;
import javastudy07.Magician;
import javastudy07.Novice;
import javastudy07.Worrior;

public class HelloJava01_Study_Poly {
	public static void main(String args[]) {
		Animal a = new Animal();
		Dog d = new Dog();
		Cat c = new Cat();

		Animal a1 = new Dog();
		Animal c2 = new Cat();

		ArrayList<Animal> zoo = new ArrayList<Animal>();
		zoo.add(a);
		zoo.add(d);
		zoo.add(c);
		zoo.add(a1);
		zoo.add(c2);
		zoo.add(new Animal());
		zoo.add(new Dog());
		zoo.add(new Cat());

		// 1.
		ArrayList<Animal> animalHospital = new ArrayList<Animal>();

		// 2.
		a.setName("¸¶·ç½¦");
		a.setAge(6);

		d.setName("¹¶Ä¡");
		d.setAge(8);
		d.setHairColor("ÇÏ¾á»ö");

		c.setName("±âµ¿ÀÌ");
		c.setAge(7);
		c.setEyeColor("È¸»ö");

		animalHospital.add(a);
		animalHospital.add(d);
		animalHospital.add(c);

		for (Animal animal : animalHospital) {
			animal.AnimalInfo();
			animal.Sleep();
			if (animal instanceof Dog) {
				((Dog) animal).bark();
			} else if (animal instanceof Cat) {
				((Cat) animal).meow();
			}
			System.out.println("--------");
		}
	}
}
