package javastudy04;

public class Employee {
	private String name;
	private String sabeon;
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getSabeon() {
		return sabeon;
	}
	public void setSabeon(String sabeon) {
		this.sabeon = sabeon;
	}
	public Employee(String name, String sabeon) {
		super();
		this.name = name;
		this.sabeon = sabeon;
	}
	//메모리마다 고유의 해시코드가 있음
	@Override
	public int hashCode() {
		// TODO Auto-generated method stub
		return (name+sabeon).hashCode();
	}
	@Override
	public boolean equals(Object obj) {
		// TODO Auto-generated method stub
		Employee temp=(Employee)obj;
		return temp.getName().equals(name) && temp.getSabeon().equals(sabeon);
	}
}
