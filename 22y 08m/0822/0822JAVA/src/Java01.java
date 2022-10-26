import java.util.*; //(*)모든 유틸 함수 불러옴

//'교사' 클래스 선언하기
class Teacher{
	//클래스 구성요소 : 필드(멤버 변수), 메소드(멤버 함수), 생성자
	
	//필드
	private String name;
	private int year;
	private String gender;
	
	//메소드 (멤버 함수 선언부)
	//this를 통해서 해당 객체를 참조
	public String getName() {return this.name;}
	public int getYear() {return this.year;}
	public String getGen() {return this.gender;}
	public void setName(String n) {this.name=n;}
	public void setYear(int y) {this.year=y;}
	public void setGen(String g) {this.gender=g;}
	
	//생성자 선언부
	//보통 생성자는 객체 생성할 시 자동으로 멤버 변수를 초기화 하는 데 사용
	//1.클래스 이름과 동일해야 한다.
	//2.멤버 함수처럼 따로 호출할 수 없는 메소드이다.
	//오버로딩 : 매개변수의 수와 종류가 다르다면, 같은 이름의 함수라도 함께 사용 가능
	//오버로딩은 메소드와 생성자 선언부에 많이 사용
	public Teacher(String n, int y, String g) {
		//생성자를 통해 만들어진 객체의 멤버 변수 초기화
		this.name=n;  
		this.year=y;
		this.gender=g;
	}
	public Teacher(String n, String g) {
		this.name=n;
		this.year=0;
		this.gender=g;
	}
}
public class Java01 {
 public static void main(String args[]) {
	 //객체 배열 선언(생성)
	 
	 //공간만 만들기(객체 생성은 아직 아님)
	 Teacher t[]=new Teacher[3];
	 
	 //객체 배열에 대한 객체 생성
	 t[0]=new Teacher("LYN","여자"); //매개변수 2개인 생성자 호출
	 t[1]=new Teacher("LDJ",2,"남자"); //매개변수 3개인 생성자 호출
	 t[2]=new Teacher("KSG",0,"남자");
	 
	 System.out.println("교사 목록");
	 for(int i=0;i<3;i++) {
		 System.out.println("이름 : "+t[i].getName());
		 System.out.println("경력 : "+t[i].getYear());
		 System.out.println("성별 : "+t[i].getGen());
		 System.out.println();
	 }
	 
	 //입력문 포함해서 객체 생성 및 출력하기
	 //자신의 이름, 성별만 입력 받은 뒤 이에 대한 객체를 생성하고 위와 같은 양식으로 출력하기
	 Scanner scan=new Scanner(System.in);
	 //객체 배열로 받기
	 Teacher i[]=new Teacher[1];
	 i[0]=new Teacher("김성근","남자");
	 System.out.println("이름 : "+i[0].getName());
	 System.out.println("성별 : "+i[0].getGen());
	 
	 //입력받아적기
	 String name=scan.nextLine();
	 String gender=scan.nextLine();
	 
	 System.out.println("이름 : "+name);
	 System.out.println("성별 : "+gender);
	 
	 //입력값을 바로 생성자의 매개변수로 사용하여 즉시 객체 생성
	 Teacher tc=new Teacher(scan.next(),scan.next());
	 System.out.println("내 정보");
	 System.out.println("이름 : "+tc.getName());
	 System.out.println("경력 : "+tc.getYear());
	 System.out.println("성별 : "+tc.getGen());
 }
 
 
}













