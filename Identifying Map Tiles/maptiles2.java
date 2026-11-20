import java.util.Scanner;

public class maptiles2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String key = scanner.next();

        int zoom = key.length();
        long x = 0, y = 0;

        for (int i = 0; i < zoom; i++) {
            int digit = key.charAt(i) - '0';

            x = 2 * x + digit % 2;
            y = 2 * y + digit / 2;
        }

        System.out.println(zoom + " " + x + " " + y);
    }
}
