import java.util.Scanner;

public class gnomesequencing {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        System.out.println("Gnomes:");

        for (int i = 0; i < N; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();

            if ((a <= b && b <= c) || (a >= b && b >= c)) {
                System.out.println("Ordered");
            } else {
                System.out.println("Unordered");
            }
        }
    }
}
