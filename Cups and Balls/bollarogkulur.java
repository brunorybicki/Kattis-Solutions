import java.util.Scanner;

public class bollarogkulur {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int ball = 1;

        for (int i = 0; i < 5; i++) {
            int a = scanner.nextInt(), b = scanner.nextInt();

            if (ball == a) {
                ball = b;
            } else if (ball == b) {
                ball = a;
            }
        }

        System.out.println(ball);
    }
}
