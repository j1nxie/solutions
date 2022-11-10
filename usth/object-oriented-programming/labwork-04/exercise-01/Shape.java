public abstract class Shape extends Object {
    protected double area;
    protected double volume;

    public double calArea() {
        return area;
    }

    public double calVolume() {
        return volume;
    }

    public abstract String getName();

    public abstract void setX(int x);
    public abstract void setY(int y);
    public abstract void setR(double r);
}
