import java.util.Scanner;

public class pitypoints {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        long total = 0;

        for (int i = 0; i < n; i++) {
            int a = scanner.nextInt();

            total += a;
        }

        System.out.println(total);
    }
}
