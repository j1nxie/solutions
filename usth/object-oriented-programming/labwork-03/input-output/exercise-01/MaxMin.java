import java.util.Scanner;

public class MaxMin {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int max = in.nextInt();
        int min = in.nextInt();

        while (in.hasNextLine()) {
            int value = in.nextInt();
            if (value > max) {
                max = value;
            }
            if (value < min) {
                min = value;
            }
        }

        in.close();

        System.out.println("maximum = " + max + ", minimum = " + min);
    }
}
