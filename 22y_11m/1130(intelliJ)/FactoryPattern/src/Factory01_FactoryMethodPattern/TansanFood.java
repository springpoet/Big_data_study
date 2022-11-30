package Factory01_FactoryMethodPattern;

public class TansanFood extends Food{
    @Override
    public void prepared() {
        System.out.println("탄산음료 주문함");
    }

    @Override
    public void tryEat() {
        System.out.println("탄산 캬ㅑㅑㅑ");
    }
}
