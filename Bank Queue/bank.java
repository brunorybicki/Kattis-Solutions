import java.util.Arrays;
import java.util.Scanner;

public class bank {
    static int[] parent;

    static int find(int x) {
        while (parent[x] != x) {
            parent[x] = parent[parent[x]];
            x = parent[x];
        }

        return x;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int T = scanner.nextInt();

        int[][] people = new int[n][2];

        for (int i = 0; i < n; i++) {
            people[i][0] = scanner.nextInt();
            people[i][1] = scanner.nextInt();
        }

        Arrays.sort(people, (a, b) -> Integer.compare(b[0], a[0]));

        parent = new int[T + 1];

        for (int i = 0; i <= T; i++) {
            parent[i] = i;
        }

        long total = 0;

        for (int i = 0; i < n; i++) {
            int wanted = people[i][1] + 1, slot = find(wanted);

            if (slot > 0) {
                total += people[i][0];
                parent[slot] = slot - 1;
            }
        }

        System.out.println(total);
    }
}
