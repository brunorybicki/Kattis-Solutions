import java.util.Scanner;

public class maximumnumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, highest = 0;

        while (scanner.hasNextInt() && (a = scanner.nextInt()) >= 0) {
            if (a > highest) {
                highest = a;
            }
        }

        System.out.printf("%d", highest);
    }
}
