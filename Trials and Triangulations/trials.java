import java.util.Scanner;

public class trials {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        double s = (a + b + c) / 2.0;
        double A = Math.sqrt(s * (s - a) * (s - b) * (s - c));
        System.out.printf("%.14f", A);
    }
}
