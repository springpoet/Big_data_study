package javastudy03;

public class GameCharacter {
	private String id;
	private String job;
	private int level;
	private static int count;
	
	public static void sayHello() {
		System.out.println("�ȳ�~~~");
	}
	public void attack() {
		if(job=="����") {
			System.out.println(id+"�� ���� ����");
		}
		else if(job=="������") {
			System.out.println(id+"�� ���� ����");
		}
		else {
			System.out.println("�̽�������!");
		}
	}
	
	public int getLevel() {
		return level;
	}
	public void setLevel(int level) {
		this.level = level;
	}
	public String getId() {
		return id;
	}
	public void setId(String id) {
		this.id = id;
	}
	public String getJob() {
		return job;
	}
	public static int getCount() {
		return count;
	}
	public static void setCount(int count) {
		GameCharacter.count = count;
	}
	public void setJob(String job) {
		this.job = job;
	}
	
	public GameCharacter() {
		count+=1;
	}
	
	public GameCharacter(String id,String job,int level) {
		this.id=id;
		this.job=job;
		this.level=level;
		count+=1;
	}
	public void printInfo() {
		System.out.println(this.id+"�� ������ "+this.job);
		System.out.println("Lv : "+this.level);
	}
}
