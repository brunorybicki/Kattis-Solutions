import java.util.Scanner;

public class numberfun {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        for (int i = 0; i < N; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();

            boolean possible = false;

            if (a + b == c) {
                possible = true;
            } else if (a - b == c || b - a == c) {
                possible = true;
            } else if (a * b == c) {
                possible = true;
            } else if (b != 0 && a % b == 0 && a / b == c) {
                possible = true;
            } else if (a != 0 && b % a == 0 && b / a == c) {
                possible = true;
            }

            if (possible) {
                System.out.println("Possible");
            } else {
                System.out.println("Impossible");
            }
        }
    }
}
