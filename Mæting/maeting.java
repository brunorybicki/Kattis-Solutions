import java.util.Scanner;

public class maeting {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();

        int[] x1 = new int[101];

        for (int i = 0; i < n; i++) {
            x1[i] = scanner.nextInt();
        }

        int[] x2 = new int[101];

        for (int j = 0; j < m; j++) {
            x2[j] = scanner.nextInt();
        }

        int[] identical = new int[101];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (x1[i] == x2[j]) {
                    identical[i] = 1;
                }
            } 
        }

        for (int i = 0; i < n; i++) {
            if (identical[i] == 1) {
                System.out.printf("%d ", x1[i]);
            }
        } 
    }
}
