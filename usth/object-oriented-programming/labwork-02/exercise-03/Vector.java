import java.util.*;
import java.io.*;

public class Vector {
    private int x;
    private int y;

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public void setX(int x) {
        this.x = x;
    }
     
    public void setY(int y) {
        this.y = y;
    }

    public void add(Vector other) {
        this.x += other.x;
        this.y += other.y;
    }

    public void subtract(Vector other) {
        this.x -= other.x;
        this.y -= other.y;
    }

    public int multiply(Vector other) {
        int dotProduct = this.x * other.x + this.y * other.y;
        return dotProduct;
    }
}
