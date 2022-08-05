import java.util.Scanner;
import java.util.Arrays;
public class Javastudy01 {
	public static void main1(String args[]) {
		//지난 수업 복습
		//출력문 :print(),
		System.out.print("print() : 나는 줄바꿈을 못 함");
		System.out.println("println() : 나는 줄바꿈이 포함되어 있음.");
		System.out.println();//줄바꿈만 할 때 이렇게 적기도 함
		
		int year=2022;
		//c언어 :("%d\n",year);
		System.out.println("지금은"+year+"입니다");
		
		//입력문
		//Scanner 변수 선언
		//System.in : 사용자에게 입력을 요청
		//Scanner : 입력받은 값을 읽어서 시스템에게 전달.
		Scanner s=new Scanner(System.in);
		
		//주요 입력
		//정보를 입력받아서 프로필을 출력하기
		String name=s.nextLine();
		int age=s.nextInt();
		boolean gender=s.nextBoolean();//true : 남자,false : 여자
		double height=s.nextDouble();
		char blood=s.next().charAt(0);
		s.nextLine();//이거 안넣으면 마지막 것 입력 불가능(엔터 버퍼 제거하는 과정)
		String mood=s.nextLine();
		System.out.println("내 이름은 "+name);
		System.out.println("내 나이는 :"+age);
		if(gender==true) {System.out.println("내 성별은 :남자");}
		System.out.println("내 키는 :"+height);	
		System.out.println("내 혈액형은 :"+blood);
		System.out.println("내 기분은 :"+mood);
		
		boolean result=(1+2==3);
			//result=true
		if(result==true) 
		{
			System.out.println("옳은 식입니다.");
		}
		
		//배열 : 정적할당, 동적할당
		//c언어는 문법이 따로였지만, Java는 문법이 비슷
		int arr1[]=new int[5]; // 정적 할당
		int num=s.nextInt();
		int arr2[]=new int[num]; //동적 할당
		
		//문자열
		String mine="Kim";
		String yours="Cha";
		//첫 글자 비교 : charAt() 사용 ()안의 숫자는 배열의 인덱스 넘버인 듯
		if(mine.charAt(0)==yours.charAt(0)) {
			System.out.println("첫 글자가 똑같습니다.");
		}
		else {
				System.out.println("첫 글자가 다릅니다.");
			}
		// charAt() 함수 통해서 값 참조는 가능하지만 값 변경은 안됌
		
		// toCharArray() : String 타입을 char형 배열로 변환
		// 첫번째 문자 대문자->소문자로, 소문자->대문자로
		char m[]=mine.toCharArray();
		char y[]=yours.toCharArray();
		if(m[0]>='A'&&m[0]<='Z') {
			m[0]=(char)(m[0]+32);
		}else {
			m[0]=(char)(m[0]-32);
		}
		if(y[0]>='A'&&y[0]<='Z') {
			y[0]=(char)(y[0]+32);
		}else {
			y[0]=(char)(y[0]-32);
		}
		
		// length() : String형의 길이를 반환
		System.out.println("나의 이름의 길이는 "+mine.length());
		System.out.println("너의 이름의 길이는 "+yours.length());
		
		//equals()
		//"LeeYuna" == "LeeYuna"
		String mine1="Kim";
		System.out.println("<mine1과 mine은 동일하다.>는 "+(mine==mine1));
		System.out.println("내 이름을 다시 입력해보세요.");
		String mine2=s.next();
		System.out.println("<mine 과 mine2는 동일하다.>는 "+(mine==mine2));
		System.out.println("equals 함수 사용하면?");
		System.out.println("<mine과 mine2는 동일하다.>는 "+(mine.equals(mine2)));
		
		//do-while()문
		//for, while문 특정 조건문을 만족해야만 실행 가능
		//do-while문 한번은 실행한 뒤 조건이 만족하는지 확인
		int test=0;
		while(test<=5 && test!=0)
		{
			System.out.println(test);
		} //실행 자체가 안됨.
		do {
			System.out.println(test);
			test++;
		}while(test<=5 && test!=0); //0 1 2 3 4 5 결과가 나옴 0을 일단 한번 실행 한 결과.
		
		//switch 문 : 학점 계산
		char score=s.next().charAt(0); //a,b,c,d 식
		double number;
		switch(score) 
		{
		case 'A':
			number=4;
			break;
		case 'B':
			number=3;
			break;
		case 'C':
			number=2;
			break;
		case 'D':
			number=1;
			break;
		default:
			number=0;
			break;
		}
		System.out.println(number);
		
		//2중 반복문
		//별 찍기 : 입력받는 수에 따라 규칙적으로 별 출력하기
		int in=s.nextInt();
		for(int i=0;i<in;i++) //행 수
		{
			for(int j=0;j<in;j++)//열의 별 갯수
			{
				System.out.print("*");
			}
			System.out.println(); //별 찍기
		}
		
		//swap = 두 개의 변수 값을 바꿈
		int a=3;
		int b=5;
		System.out.println("바꾸기 전 "+a+" "+b);
		int tmp=a;
		a=b;
		b=tmp;
		System.out.println("바꾸기 후 "+a+" "+b);
	}
}
