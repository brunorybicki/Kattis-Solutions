import java.util.Scanner;

public class stopwatch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        int[] t = new int[1000];

        for (int i = 0; i < N; i++) {
            t[i] = scanner.nextInt();
        }

        int display = 0;

        for (int i = 0; i + 1 < N; i += 2) {
            display += t[i + 1] - t[i];
        }

        if (N % 2 == 0) {
            System.out.println(display);
        } else {
            System.out.println("still running");
        }
    }
}
