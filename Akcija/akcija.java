import java.util.Arrays;
import java.util.Scanner;

public class akcija {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int[] prices = new int[n];

        for (int i = 0; i < n; i++) {
            prices[i] = scanner.nextInt();
        }

        Arrays.sort(prices);

        long total = 0;

        for (int i = 0; i < n; i++) {
            if ((n - i) % 3 != 0) {
                total += prices[i];
            }
        }

        System.out.println(total);
    }
}
