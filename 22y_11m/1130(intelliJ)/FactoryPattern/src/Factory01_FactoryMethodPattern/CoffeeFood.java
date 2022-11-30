package Factory01_FactoryMethodPattern;

public class CoffeeFood extends Food{
    @Override
    public void prepared() {
        System.out.println("원두를 갑니다.");
    }

    @Override
    public void tryEat() {
        System.out.println("커피 호로롥");
    }
}
