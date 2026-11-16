import java.util.Scanner;

public class splitthebill {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt(), m = scanner.nextInt(), total = 0;

        for (int i = 0; i < m; i++) {
            int bill = scanner.nextInt();
            
            total += bill;
        }

        if (total % n == 0) {
            System.out.println("1");
        } else {
            System.out.println("0");
        }
    }
}
