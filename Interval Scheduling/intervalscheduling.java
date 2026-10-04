import java.util.Arrays;
import java.util.Scanner;

public class intervalscheduling {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int[][] interval = new int[n][2];

        for (int i = 0; i < n; i++) {
            interval[i][0] = scanner.nextInt();
            interval[i][1] = scanner.nextInt();
        }

        Arrays.sort(interval, (a, b) -> Integer.compare(a[1], b[1]));

        int count = 0, lastFinish = -1;

        for (int i = 0; i < n; i++) {
            if (interval[i][0] >= lastFinish) {
                count++;
                lastFinish = interval[i][1];
            }
        }

        System.out.println(count);
    }
}
