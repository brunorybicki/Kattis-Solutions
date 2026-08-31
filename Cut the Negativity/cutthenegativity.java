import java.util.Scanner;

public class cutthenegativity {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int m = 0;
        int[] u = new int[10000];
        int[] v = new int[10000];
        int[] cost = new int[10000];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int c = scanner.nextInt();

                if (c != -1) {
                    u[m] = i + 1;
                    v[m] = j + 1;
                    cost[m] = c;
                    m++;
                }
            }
        }

        System.out.println(m);

        for (int k = 0; k < m; k++) {
            System.out.println(u[k] + " " + v[k] + " " + cost[k]);
        }
    }
}
