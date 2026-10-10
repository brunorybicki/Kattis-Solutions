import java.util.Scanner;

public class regarde {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int t = scanner.nextInt();

        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();

            System.out.println("s" + "h".repeat(n + 1));
        }
    }
}
