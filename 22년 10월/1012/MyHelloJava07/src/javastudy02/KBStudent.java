package javastudy02;

public class KBStudent implements Comparable<KBStudent>{
	private String Name;
	private String Gender;
	private int Age;
	private int Number;
	public KBStudent(String name, String gender, int age, int number) {
//		super();
		Name = name;
		Gender = gender;
		Age = age;
		Number = number;
	}
	
	public String getName() {
		return Name;
	}

	public void setName(String name) {
		Name = name;
	}

	public String getGender() {
		return Gender;
	}

	public void setGender(String gender) {
		Gender = gender;
	}

	public int getAge() {
		return Age;
	}

	public void setAge(int age) {
		Age = age;
	}

	public int getNumber() {
		return Number;
	}

	public void setNumber(int number) {
		Number = number;
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
//	return super.toString();
		return "이름 : "+Name+", 성별 : "+Gender+", 나이 : "+Age+", 번호 : "+Number;
	}
	
	public boolean bigyo(int obj) {
		// TODO Auto-generated method stub
		//return super.equals(obj);
		return obj==this.Number;
	}

	@Override
	public int compareTo(KBStudent o) {
		// TODO Auto-generated method stub
		return Age - o.getAge();
	}
}
