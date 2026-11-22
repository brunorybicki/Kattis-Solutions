import java.util.Scanner;

public class dicecup {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt(), m = scanner.nextInt();

        int low = n, high = m;

        if (m < n) {
            low = m;
            high = n;
        }

        for (int i = low + 1; i <= high + 1; i++) {
            System.out.println(i);
        }
    }
}
