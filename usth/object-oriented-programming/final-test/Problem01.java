import java.util.Scanner;

class Problem01 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// enter natural number
		System.out.print("Input a natural number n: ");
		int n;
		while (true) {
			n = sc.nextInt();
			if (n > 1) {
				break;
			}
		}

		float[] x = new float[n];
		for (int i = 0; i < n; i++) {
			System.out.print("Input vector x: ");
			x[i] = sc.nextFloat();
		}

		float[] y = new float[n];
		for (int j = 0; j < n; j++) {
			System.out.print("Input vector y: ");
			y[j] = sc.nextFloat();
		}
	}
}
