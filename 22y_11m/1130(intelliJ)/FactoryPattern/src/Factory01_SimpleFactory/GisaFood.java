package Factory01_SimpleFactory;

public class GisaFood extends Food{
    @Override
    public void prepared() {
        System.out.println("기사들만 아는 찐 맛집");
    }

    @Override
    public void tryEat() {
        System.out.println("맛있게 먹는 기사들");
    }
}
