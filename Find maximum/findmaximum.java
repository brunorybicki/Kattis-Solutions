import java.util.Scanner;

public class findmaximum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int integer1 = scanner.nextInt();
        int integer2 = scanner.nextInt();
        int integer3 = scanner.nextInt();

        int max = integer1;

        if (integer2 > max) {
            max = integer2;
        }

        if (integer3 > max) {
            max = integer3;
        }

        System.out.println(max);
    }
}
