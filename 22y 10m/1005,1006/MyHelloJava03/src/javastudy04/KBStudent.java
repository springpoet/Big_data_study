package javastudy04;

public class KBStudent extends Student{ 
	private String gender;
	private String education;
	
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	public String getEducation() {
		return education;
	}
	public void setEducation(String education) {
		this.education = education;
	}
	
	public void attend(String att) {
		System.out.println("이름 : "+getName()+" 나이 : "+getAge()+" 성별 : "+gender+" 학력 : "+education);
		System.out.println(att+"!!!");
	}
}
