public class Cylinder extends Circle {
    protected double h;
    protected double volume = Math.PI*r*r*h;

    public void setH(double h) {
        this.h = h;
    }

    public double getH() {
        return h;
    }

    public String getName() {
        return "Cylinder";
    }
}
