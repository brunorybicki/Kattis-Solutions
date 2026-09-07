import java.util.Scanner;

public class zanzibar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < T; i++) {
            int imported = 0, previous, current;
            previous = scanner.nextInt();
            current = scanner.nextInt();

            while (current != 0) {
                if (current > 2 * previous) {
                    imported += current - 2 * previous;
                }

                previous = current;

                current = scanner.nextInt();
            }

            System.out.println(imported);
        }
    }  
}
