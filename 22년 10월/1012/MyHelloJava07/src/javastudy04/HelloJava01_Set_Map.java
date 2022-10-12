package javastudy04;

import java.util.*;

import javastudy03.KBStudent;

public class HelloJava01_Set_Map {
	public static void main(String[] args) {
		List<Integer> ex1 = new ArrayList<Integer>();
		List<Integer> ex2 = new LinkedList<Integer>();
		List<Integer> ex3 = new Stack<Integer>();
		List<Integer> ex4 = new Vector<Integer>();

		// Map은 C#의 dictionary, 파이썬의 dict와 같음
		//키와 값으로 값을 저장, 관리하고 키값이 중복되면 기존 값 삭제됨
		// 대표 : HashMap
		Map<Integer, String> students = new HashMap<Integer, String>();
		students.put(1, "안서준");
		students.put(2, "이동준");
		students.put(1, "박지호"); // 안서준은 삭제 됨.
		for(int key : students.keySet()) {
			System.out.println(key);
			System.out.println(students.get(key));
		}
		//hash : 각자를 구분하는 고유값(혹은 고유 코드)
		
		// Set : 중복을 허용하지 않는 리스트
		Set<String> workers=new HashSet<String>();
		workers.add("김진규");
		workers.add("김보규");
		workers.add("김진규");
		workers.add("이동준");
		workers.add("이동준");
		
		System.out.println("---Set test---");
		for(String string : workers) {
			System.out.println(string);
		}
		
		KBStudent k1=new KBStudent("이현민","남성",30,3);
		KBStudent k2=new KBStudent("이현민","남성",30,3);
		
		Set<KBStudent> kbstudents=new HashSet<KBStudent>();
		System.out.println(k1.equals(k2));
		kbstudents.add(k1);
		kbstudents.add(k2);
		for (KBStudent kbStudent : kbstudents) {
			System.out.println(kbStudent);
		}
		
	}
}
