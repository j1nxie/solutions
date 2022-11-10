public class Circle extends Point {
    protected double r;
    protected double area = Math.PI*r*r;

    public void setR(double r) {
        this.r = r;
    }

    public double getR() {
        return r;
    }

    public String getName() {
        return "Circle";
    }
}
