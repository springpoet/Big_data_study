import java.util.Scanner;
import java.util.Arrays;
public class Javastudy01 {
	public static void main1(String[] args) {
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
		if(result==true) {System.out.println("옳은 식입니다.");
		
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
		}
	}
}
