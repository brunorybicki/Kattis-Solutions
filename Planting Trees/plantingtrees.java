import java.util.Arrays;
import java.util.Scanner;

public class plantingtrees {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        int[] t = new int[N];

        for (int i = 0; i < N; i++) {
            t[i] = scanner.nextInt();
        }

        Arrays.sort(t);

        int maximumTimeToGrow = 0;

        for (int i = 0; i < N; i++) {
            int timeToGrow = (i + 1) + t[N - 1 - i];

            if (timeToGrow > maximumTimeToGrow) {
                maximumTimeToGrow = timeToGrow;
            }
        }

        System.out.println(maximumTimeToGrow + 1);
    }
}
