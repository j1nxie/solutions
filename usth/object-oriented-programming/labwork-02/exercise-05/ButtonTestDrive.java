import java.util.*;
import java.io.*;

public class ButtonTestDrive {
    public static void main(String args[]) {
        Button button = new Button();

        button.setLabel("hi");
        button.setColor("pink");

        System.out.println(button.getLabel() + " " + button.getColor());
        
        button.dePress();
        button.unDepress();
    } 
}
