public class Automobile {
    private double fuel;
    private double speed;
    private String license;

    public void init(double f, double s, String l) {
        this.fuel = f;
        this.speed = s;
        this.license = l;
    }

    public void accelerate(double v) {
        if (this.fuel > 0) {
            this.speed += v;
        }
    }

    public void decelerate(double v) {
        if (this.fuel <= 0) {
            this.speed -= v;
        }
    }

    public static void main(String args[]) {
        Automobile car = new Automobile();
        car.init(4.5, 34, "29JAD");
        car.accelerate(4);
        car.decelerate(5);
    }
}
