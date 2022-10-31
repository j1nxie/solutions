import java.util.*;
import java.io.*;

public class Button {
    private String label;
    private String color;

    public void setLabel(String label) {
        this.label = label;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public String getLabel() {
        return label;
    }

    public String getColor() {
        return color;
    }

    public void dePress() {
        System.out.println("boop");
    }

    public void unDepress() {
        System.out.println("beep");
    }
}
