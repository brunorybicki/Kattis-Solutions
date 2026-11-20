import java.util.Scanner;

public class sumkindofproblem {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int p = scanner.nextInt();

        for (int i = 0; i < p; i++) {
            int k = scanner.nextInt();
            long n = scanner.nextLong();

            System.out.println(k + " " + n * (n + 1) / 2 + " " + n * n + " " + n * (n + 1));
        }
    }
}
