import java.util.*;
import java.io.*;

public class ShoppingCartTestDrive {
    public static void main(String args[]) {
        ShoppingCart cart = new ShoppingCart();

        cart.addToCart("egg");
        cart.addToCart("bread");

        cart.removeFromCart("bread");
        cart.checkOut();
    }
}
