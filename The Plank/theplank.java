import java.util.Scanner;

public class theplank {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        long[] ways = new long[n + 1];
        ways[0] = 1;

        for (int i = 1; i <= n; i++) {
            ways[i] = ways[i - 1];

            if (i >= 2) {
                ways[i] += ways[i - 2];
            }

            if (i >= 3) {
                ways[i] += ways[i - 3];
            }
        }

        System.out.println(ways[n]);
    }
}
