import java.util.Scanner;

public class qwerty {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();

        scanner.nextLine();

        String message = scanner.nextLine(), qwerty = "qwertyuiopasdfghjklzxcvbnm";

        for (int i = 0; i < N; i++) {
            char c = message.charAt(i);

            if (c >= 'a' && c <= 'z') {
                System.out.print(qwerty.charAt(c - 'a'));
            } else {
                System.out.print(c);
            }
        }

        System.out.println();
    }
}
