import java.util.Scanner;

public class threeinarow {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long n = scanner.nextLong();

        long x = 1;
        int count = 0;

        while (x * (x + 1) * (x + 2) < n) {
            count++;
            x++;
        }

        System.out.println(count);
    }
}
