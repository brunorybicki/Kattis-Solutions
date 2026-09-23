import java.util.Scanner;

public class colorfuloutfits {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        if (n % 2 == 0) {
            System.out.println(2);
        } else {
            System.out.println(3);
        }
    }
}
