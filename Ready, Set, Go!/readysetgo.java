import java.util.Scanner;

public class readysetgo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        int H = scanner.nextInt();

        System.out.print(T - H);
    }
}
