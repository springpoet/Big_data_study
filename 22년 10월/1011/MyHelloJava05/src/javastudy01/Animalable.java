package javastudy01;

public interface Animalable {
	public void charming();
	public default void sleep() {
		System.out.println("잠을 잡니다.");
	}
}
