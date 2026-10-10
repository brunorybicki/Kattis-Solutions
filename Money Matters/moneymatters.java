import java.util.Arrays;
import java.util.Scanner;

public class moneymatters {
    static int find(int[] parent, int x) {
        while (parent[x] != x) {
            parent[x] = parent[parent[x]];
            x = parent[x];
        }

        return x;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt(), m = scanner.nextInt();

        int[] o = new int[n];

        for (int i = 0; i < n; i++) {
            o[i] = scanner.nextInt();
        }

        int[] parent = new int[n];
        Arrays.setAll(parent, i -> i);

        for (int i = 0; i < m; i++) {
            int a = scanner.nextInt(), b = scanner.nextInt();

            parent[find(parent, a)] = find(parent, b);
        }

        int[] sums = new int[n];

        for (int i = 0; i < n; i++) {
            sums[find(parent, i)] += o[i];
        }

        boolean possible = Arrays.stream(sums).allMatch(s -> s == 0);

        if (possible) {
            System.out.println("POSSIBLE");
        } else {
            System.out.println("IMPOSSIBLE");
        }
    }
}
