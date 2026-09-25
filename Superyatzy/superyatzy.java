import java.util.Scanner;

public class superyatzy {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int M = scanner.nextInt();

        int[] counts = new int[7];

        for (int i = 0; i < N; i++) {
            int t = scanner.nextInt();
            
            counts[t]++;
        }

        int maxCount = 0;

        for (int i = 1; i <= 6; i++) {
            if (counts[i] > maxCount) {
                maxCount = counts[i];
            }
        }

        if (N - maxCount <= M) {
            System.out.println("Ja");
        } else {
            System.out.println("Nej");
        }
    }
}
