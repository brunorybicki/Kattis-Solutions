import java.util.Scanner;

public class fairytale {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        for (int test = 0; test < t; test++) {
            int n = scanner.nextInt();

            int[] used = new int[4];
            int count = 0;

            for (int i = 0; i < n; i++) {
                int a = scanner.nextInt();

                used[(a - 1) / 10] = 1;
            }

            for (int i = 0; i < 4; i++) {
                if (used[i] == 1) {
                    count++;
                }
            }

            System.out.println(count);
        }
    }
}
