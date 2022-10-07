package javastudy03;

public abstract class Teacher {
	private String name;
	private String major;
	public abstract void Teach();
	public Teacher() {
		
	}
	public Teacher(String name,String major) {
		super();
		this.name=name;
		this.major=major;
	}
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getMajor() {
		return major;
	}

	public void setMajor(String major) {
		this.major = major;
	}
	
	
}
