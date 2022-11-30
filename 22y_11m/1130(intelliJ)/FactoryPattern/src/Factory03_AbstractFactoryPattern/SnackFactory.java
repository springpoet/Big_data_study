package Factory03_AbstractFactoryPattern;

public class SnackFactory extends FoodFactory{
    @Override
    public Food createFood() {
        return new SnackFood();
    }
}
