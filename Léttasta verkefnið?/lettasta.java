import java.util.Scanner;

public class lettasta {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();

        String[] names = new String[N];

        for (int i = 0; i < N; i++) {
            names[i] = scanner.next();
        }

        int[] totals = new int[N];

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                totals[j] += scanner.nextInt();
            }
        }

        int best = 0;

        for (int j = 1; j < N; j++) {
            if (totals[j] > totals[best]) {
                best = j;
            }
        }

        System.out.println(names[best]);
    }
}
