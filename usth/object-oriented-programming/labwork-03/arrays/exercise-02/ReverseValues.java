public class ReverseValues {
    public static void main(String[] args) {
        String[] a = {"a", "b", "c", "d"};
        int n = a.length;
        for (int i = 0; i < n/2; i++) {
            String temp = a[n-i-1];
            a[n-i-1] = a[i];
            a[i] = temp;
        }

        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
        }
    }
}
