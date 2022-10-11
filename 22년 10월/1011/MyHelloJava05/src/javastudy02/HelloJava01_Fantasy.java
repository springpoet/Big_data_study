package javastudy02;

import java.util.*;

public class HelloJava01_Fantasy {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<Cryptid> fantasies = new ArrayList<Cryptid>();
		fantasies.add(new Dragon());
		fantasies.add(new Unicorn());
		fantasies.add(new Cryptid() {
			public void sleep() {
			}
		});
	}

}
