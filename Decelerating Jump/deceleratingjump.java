import java.util.Scanner;

public class deceleratingjump {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        long[] p = new long[n + 1];

        for (int i = 1; i <= n; i++) {
            p[i] = scanner.nextLong();
        }

        long negative = -4000000000000000000L;
        long[][] best = new long[n + 1][n + 2];

        for (int i = 1; i <= n; i++) {
            best[i][n + 1] = negative;

            for (int j = n; j >= 1; j--) {
                long value = negative;

                if (i == 1) {
                    value = p[1];
                } else if (j < i) {
                    value = p[i] + best[i - j][j];
                }

                best[i][j] = value;

                if (best[i][j + 1] > best[i][j]) {
                    best[i][j] = best[i][j + 1];
                }
            }
        }

        System.out.println(best[n][1]);
    }
}
