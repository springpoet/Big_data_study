class program{
	private String name;
	private int num;
	private String gender;
	
	public program(String a, int b, String c) {
		this.name=a;
		this.num=b;
		this.gender=c;
	}
	public String setName(String a) {return a=name;}
	public String getName() {return name;}
	public int setNum(int b) {return b=num;}
	public int getNum() {return num;}
	public String setGen(String c) {return c=gender;}
	public String getGen() {return gender;}
}
public class JavaSolve {
	public static void main(String args[]) {
		program stu1=new program("이동준",2009038033,"남자");
		program stu2=new program("이제영",2007012034,"여자");
		program stu3=new program("박준현",2002012034,"남자");
		
		stu1.setNum(2019038033);
		stu2.setName("김성근");
		stu2.setNum(52578555);
		stu2.setGen("남자");
		stu3.setName("차승화");
		stu3.setNum(12345);
		stu3.setGen("남자");
		
		System.out.println(stu1);
		
		}

}
