import java.util.Scanner;

public class nostragglers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        int stragglers = 0;

        for (int i = 0; i < N; i++) {
            String type = scanner.next();
            String direction = scanner.next();
            int number = scanner.nextInt();

            if (direction.charAt(0) == 'I') {
                stragglers += number;
            } else {
                stragglers -= number;
            }
        }

        if (stragglers == 0) {
            System.out.println("NO STRAGGLERS");
        } else {
            System.out.println(stragglers);
        }
    }
}
