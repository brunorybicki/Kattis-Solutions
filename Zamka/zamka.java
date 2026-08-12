import java.util.Scanner;

public class zamka {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int L = scanner.nextInt();
        int D = scanner.nextInt();
        int X = scanner.nextInt();

        int N = 0;

        for (int i = L; i <= D; i++) {
            if (i % 10 + (i / 10) % 10 + (i / 100) % 10 + (i / 1000) % 10 + (i / 10000) % 10 == X) {
                N = i;
                break;
            }
        }

        int M = 0;

        for (int i = D; i >= L; i--) {
            if (i % 10 + (i / 10) % 10 + (i / 100) % 10 + (i / 1000) % 10 + (i / 10000) % 10 == X) {
                M = i;
                break;
            }
        }

        System.out.println(N);
        System.out.println(M);
    }
}
