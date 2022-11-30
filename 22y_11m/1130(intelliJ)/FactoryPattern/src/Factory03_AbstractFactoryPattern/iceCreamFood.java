package Factory03_AbstractFactoryPattern;

public class iceCreamFood extends Food {
       @Override
    public void prepared() {
           System.out.println("아이스크림 준비");     
    }

    @Override
    public void tryEat() {
        System.out.println("아이스크림 먹방");

    }
}
