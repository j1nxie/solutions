import java.util.*;
import java.io.*;

public class NameCardTestDrive {
    public static void main(String args[]) {
        NameCard nc = new NameCard();
        nc.setName("Rylie");
        nc.setPhone("069420727");
        nc.setEmail("rylie@rylie.moe");

        System.out.println(nc.getName());
        System.out.println(nc.getPhone());
        System.out.println(nc.getEmail());
    }
}
