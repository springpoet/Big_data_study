package Factory03_AbstractFactoryPattern;

public class iceCreamFactory extends FoodFactory{
    @Override
    public iceCreamFood createFood() {
        return new iceCreamFood();
    }
}
