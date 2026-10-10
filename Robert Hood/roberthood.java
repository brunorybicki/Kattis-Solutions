import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

public class roberthood {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int C = scanner.nextInt();

        int[] low = new int[2001], high = new int[2001];
        Arrays.fill(low, 1001);
        Arrays.fill(high, -1001);

        for (int i = 0; i < C; i++) {
            int x = scanner.nextInt(), y = scanner.nextInt();

            low[x + 1000] = Math.min(low[x + 1000], y);
            high[x + 1000] = Math.max(high[x + 1000], y);
        }

        List<int[]> points = new ArrayList<>();

        for (int i = 0; i < 2001; i++) {
            if (low[i] != 1001) {
                points.add(new int[] {i - 1000, low[i]});
                points.add(new int[] {i - 1000, high[i]});
            }
        }

        int count = points.size(), best = 0;

        for (int i = 0; i < count; i++) {
            for (int j = i + 1; j < count; j++) {
                int dx = points.get(i)[0] - points.get(j)[0];
                int dy = points.get(i)[1] - points.get(j)[1];

                best = Math.max(best, dx * dx + dy * dy);
            }
        }

        System.out.println(String.format(Locale.US, "%.9f", Math.sqrt(best)));
    }
}
