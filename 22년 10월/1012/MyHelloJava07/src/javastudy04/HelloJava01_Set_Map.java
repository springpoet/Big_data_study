package javastudy04;

import java.util.*;

import javastudy03.KBStudent;

public class HelloJava01_Set_Map {
	public static void main(String[] args) {
		List<Integer> ex1 = new ArrayList<Integer>();
		List<Integer> ex2 = new LinkedList<Integer>();
		List<Integer> ex3 = new Stack<Integer>();
		List<Integer> ex4 = new Vector<Integer>();

		// Map�� C#�� dictionary, ���̽��� dict�� ����
		//Ű�� ������ ���� ����, �����ϰ� Ű���� �ߺ��Ǹ� ���� �� ������
		// ��ǥ : HashMap
		Map<Integer, String> students = new HashMap<Integer, String>();
		students.put(1, "�ȼ���");
		students.put(2, "�̵���");
		students.put(1, "����ȣ"); // �ȼ����� ���� ��.
		for(int key : students.keySet()) {
			System.out.println(key);
			System.out.println(students.get(key));
		}
		//hash : ���ڸ� �����ϴ� ������(Ȥ�� ���� �ڵ�)
		
		// Set : �ߺ��� ������� �ʴ� ����Ʈ
		Set<String> workers=new HashSet<String>();
		workers.add("������");
		workers.add("�躸��");
		workers.add("������");
		workers.add("�̵���");
		workers.add("�̵���");
		
		System.out.println("---Set test---");
		for(String string : workers) {
			System.out.println(string);
		}
		
		KBStudent k1=new KBStudent("������","����",30,3);
		KBStudent k2=new KBStudent("������","����",30,3);
		
		Set<KBStudent> kbstudents=new HashSet<KBStudent>();
		System.out.println(k1.equals(k2));
		kbstudents.add(k1);
		kbstudents.add(k2);
		for (KBStudent kbStudent : kbstudents) {
			System.out.println(kbStudent);
		}
		
	}
}
