import java.util.Scanner;

public class stayingfrosty {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int w = scanner.nextInt();
        int p = scanner.nextInt();

        if (w <= p * 360) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
