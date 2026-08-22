import java.util.Scanner;

public class budget2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int b = scanner.nextInt();
        int p1 = scanner.nextInt();
        int p2 = scanner.nextInt();
        int p3 = scanner.nextInt();

        if (p1 + p2 + p3 <= b) {
            System.out.println("Budget is sufficient.");
        } else {
            System.out.println("Budget is insufficient.");
        }
    }
}
