import java.util.Scanner;

public class majorasmath {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int h = scanner.nextInt();
        int n = scanner.nextInt();

        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        int d = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            String arrowType = scanner.next();

            if (arrowType.equals("standard")) {
                h -= a;
            } else if (arrowType.equals("fire")) {
                h -= b;
            } else if (arrowType.equals("ice")) {
                h -= c;
            } else {
                h -= d;
            }
        }

        if (h <= 0) {
            System.out.println("dead");
        } else {
            System.out.println(h);
        }
    }
}
