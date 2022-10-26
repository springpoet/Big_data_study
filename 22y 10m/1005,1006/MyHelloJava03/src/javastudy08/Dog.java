package javastudy08;

public class Dog extends Animal{
	private String hairColor;

	public String getHairColor() {
		return hairColor;
	}

	public void setHairColor(String hairColor) {
		this.hairColor = hairColor;
	}
	public void bark() {
		System.out.println(hairColor+"»ö ÅÐÀ» »Ë³»¸ç ¸Û¸Û");
	}
}
