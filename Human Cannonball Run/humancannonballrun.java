import java.util.Locale;
import java.util.Scanner;

public class humancannonballrun {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double startX = scanner.nextDouble(), startY = scanner.nextDouble();
        double endX = scanner.nextDouble(), endY = scanner.nextDouble();

        int n = scanner.nextInt();

        double[] x = new double[n + 2], y = new double[n + 2];
        double[][] time = new double[n + 2][n + 2];

        x[0] = startX;
        y[0] = startY;
        x[n + 1] = endX;
        y[n + 1] = endY;

        for (int i = 1; i <= n; i++) {
            x[i] = scanner.nextDouble();
            y[i] = scanner.nextDouble();
        }

        for (int i = 0; i < n + 2; i++) {
            for (int j = 0; j < n + 2; j++) {
                double distance = Math.sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));

                time[i][j] = distance / 5;

                if (i >= 1 && i <= n && 2 + Math.abs(distance - 50) / 5 < time[i][j]) {
                    time[i][j] = 2 + Math.abs(distance - 50) / 5;
                }
            }
        }

        for (int k = 0; k < n + 2; k++) {
            for (int i = 0; i < n + 2; i++) {
                for (int j = 0; j < n + 2; j++) {
                    if (time[i][k] + time[k][j] < time[i][j]) {
                        time[i][j] = time[i][k] + time[k][j];
                    }
                }
            }
        }

        System.out.println(String.format(Locale.US, "%.6f", time[0][n + 1]));
    }
}
