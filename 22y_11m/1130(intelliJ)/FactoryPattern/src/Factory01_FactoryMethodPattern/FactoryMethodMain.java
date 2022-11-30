package Factory01_FactoryMethodPattern;

public class FactoryMethodMain {
    public static void main(String[] args) {
        FoodStore store1=new BaekBoy();
        Food f1=store1.orderFood();
        f1.tryEat();

        FoodStore store2=new BaekDabang();
        Food f2=store2.orderFood();
        f2.tryEat();

        //팩토리 메소드 패턴
        //심플 팩토리와는 다르게 type 값을 입력 받지 않음.
        //Food와 FoodStore을 상속한 클래스를 만들기만하면
        //코드 수정 없이 바로 새로운 음식점과 음식을 만들 수 있다.

        //객체 지향의 가장 중요한 특징을 반영
        //OCP(객체 폐쇄의 특징 : 확장은 가능, 수정은 X)
    }
}
