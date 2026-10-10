import java.util.Scanner;

public class kastenlauf {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();

            int[] x = new int[n + 2], y = new int[n + 2];

            for (int i = 0; i < n + 2; i++) {
                x[i] = scanner.nextInt();
                y[i] = scanner.nextInt();
            }

            int[][] reach = new int[n + 2][n + 2];

            for (int i = 0; i < n + 2; i++) {
                for (int j = 0; j < n + 2; j++) {
                    reach[i][j] = Math.abs(x[i] - x[j]) + Math.abs(y[i] - y[j]);
                }
            }

            for (int k = 0; k < n + 2; k++) {
                for (int i = 0; i < n + 2; i++) {
                    for (int j = 0; j < n + 2; j++) {
                        if (reach[i][k] <= 1000 && reach[k][j] <= 1000) {
                            reach[i][j] = 1;
                        }
                    }
                }
            }

            if (reach[0][n + 1] <= 1000) {
                System.out.println("happy");
            } else {
                System.out.println("sad");
            }
        }
    }
}
