import java.util.*;
import java.io.*;

public class VectorTestDrive {
    public static void main(String args[]) {
        Vector a = new Vector();
        Vector b = new Vector();

        a.setX(5); a.setY(5);
        b.setX(7); b.setY(7);

        a.add(b);
        System.out.println("a + b = " + a.getX() + " " + a.getY());

        a.subtract(b);
        System.out.println("a - b = " + a.getX() + " " + a.getY());

        System.out.println("dot product of a and b is: " + a.multiply(b));
    }
}
