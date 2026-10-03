import java.util.Arrays;
import java.util.Scanner;

public class minimumscalar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();

        for (int t = 0; t < T; t++) {
            int N = scanner.nextInt();

            long[] xi = new long[N];
            long[] yi = new long[N];

            for (int i = 0; i < N; i++) {
                xi[i] = scanner.nextLong();
            }

            Arrays.sort(xi);

            for (int i = 0; i < N; i++) {
                yi[i] = scanner.nextLong();
            }

            Arrays.sort(yi);

            long scalarProduct = 0;

            for (int i = 0; i < N; i++) {
                scalarProduct += xi[(N - 1) - i] * yi[i];
            }

            System.out.println("Case #" + (t + 1) + ": " + scalarProduct);
        }
    }
}
