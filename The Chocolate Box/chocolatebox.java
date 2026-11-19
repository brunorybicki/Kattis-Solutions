import java.util.Scanner;

public class chocolatebox {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int previous = scanner.nextInt(), boxes = 0;

        for (int i = 1; i < n; i++) {
            int current = scanner.nextInt();

            if (current > previous) {
                boxes++;
            }

            previous = current;
        }

        System.out.println(boxes);
    }
}
