import java.util.ArrayList;

public class ShapeTestDrive {
    public static void main(String[] args) {
        Shape[] shapes = new Shape[4];

        shapes[0] = new Point();

        shapes[0].setX(0);
        shapes[0].setY(0);

        System.out.println(shapes[0].getName());

        shapes[1] = new Circle();

        shapes[1].setX(0);
        shapes[1].setY(0);
        shapes[1].setR(3);

        System.out.println(shapes[1].calArea());
        System.out.println(shapes[1].getName());
    }
}
