import java.util.Scanner;

public class speeding {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();

        int[] t = new int[n], d = new int[n];

        for (int i = 0; i < n; i++) {
            t[i] = scanner.nextInt();
            d[i] = scanner.nextInt();
        }

        int maximumSpeed = 0;

        for (int i = 1; i < n; i++) {
            int speed = (d[i] - d[i - 1]) / (t[i] - t[i - 1]);

            maximumSpeed = Math.max(maximumSpeed, speed);
        }

        System.out.println(maximumSpeed);
    }
}
