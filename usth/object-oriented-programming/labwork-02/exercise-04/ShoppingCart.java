import java.util.*;
import java.io.*;

public class ShoppingCart {
    private ArrayList<String> cartContents = new ArrayList<>();
    
    public void addToCart(String item) {
        cartContents.add(item); 
    }

    public void removeFromCart(String item) {
        cartContents.remove(item);
    }

    public void checkOut() {
        System.out.println(cartContents.toString());
    }
}
