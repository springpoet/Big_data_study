public class Main {
    public static Food order(String type){
        switch (type){
            case "우리집":
                return new MyHomeFood();
            case "자취집":
                return new SelfFood();
            default:
                return null;
        }
    }
    public static void main(String[] args) {
        Food f1=new MyHomeFood();
        Food f2=new SelfFood();
        f1.prepared();
        f1.tryEat();
        f2.prepared();
        f2.tryEat();

        //함수 이용
        Food f3=order("우리집");
        Food f4=order("자취집");
        f3.prepared();
        f3.tryEat();
        f4.prepared();
        f4.tryEat();
    }
}