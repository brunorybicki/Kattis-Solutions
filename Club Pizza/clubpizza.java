import java.util.Arrays;
import java.util.Scanner;

public class clubpizza {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt(), c = scanner.nextInt();

        int[] cheapest = new int[24];
        Arrays.fill(cheapest, Integer.MAX_VALUE);

        for (int i = 0; i < n; i++) {
            int t = scanner.nextInt(), p = scanner.nextInt();

            cheapest[t] = Math.min(cheapest[t], p);
        }

        Arrays.sort(cheapest);

        int total = 0, clubs = 0;

        for (int i = 0; i < 24; i++) {
            if (cheapest[i] <= c - total) {
                total += cheapest[i];
                clubs++;
            } else {
                break;
            }
        }

        System.out.println(clubs);
    }
}
