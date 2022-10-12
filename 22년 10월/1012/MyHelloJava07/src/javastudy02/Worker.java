package javastudy02;

public class Worker {
	private String Name;
	private String cNum;
	public Worker(String name, String cNum) {
		super();
		Name = name;
		this.cNum = cNum;
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public String getcNum() {
		return cNum;
	}
	public void setcNum(String cNum) {
		this.cNum = cNum;
	}
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		//return super.toString();
		return "이름 : "+Name+", 사번 : "+cNum;
	}
	@Override
	public boolean equals(Object obj) {
		// TODO Auto-generated method stub
		//return super.equals(obj);
		Worker w=(Worker)obj;
		return w.getcNum().equals(cNum) && w.getName().equals(Name);
	}
}
