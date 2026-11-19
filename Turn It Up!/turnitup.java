import java.util.Scanner;

public class turnitup {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int volume = 7;

        for (int i = 0; i < n; i++) {
            String first = scanner.next(), second = scanner.next();

            if (second.equals("op!")) {
                if (volume < 10) {
                    volume++;
                }
            } else {
                if (volume > 0) {
                    volume--;
                }
            }
        }

        System.out.println(volume);
    }
}
