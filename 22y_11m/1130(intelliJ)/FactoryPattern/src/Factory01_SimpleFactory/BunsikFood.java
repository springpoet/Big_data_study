package Factory01_SimpleFactory;

public class BunsikFood extends Food{
    @Override
    public void prepared() {
        System.out.println("학교 앞 분식집 음식 준비");
    }

    @Override
    public void tryEat() {
        System.out.println("추억 돋는 학교 앞 분식");
    }
}
