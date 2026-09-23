import java.util.Scanner;

public class thestockmarket {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int k = scanner.nextInt();

        int[] prices = new int[n];

        for (int i = 0; i < n; i++) {
            prices[i] = scanner.nextInt();
        }

        int maxProfit = prices[k] - prices[0];

        for (int i = 1; i + k < n; i++) {
            if (prices[i + k] - prices[i] > maxProfit) {
                maxProfit = prices[i + k] - prices[i];
            }
        }

        System.out.printf("%d\n", maxProfit);        
    }
}
