import java.util.Scanner;

public class blackfriday {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();

        int[] a = new int[n], count = new int[7];

        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
            count[a[i]]++;
        }

        int winner = -1, best = -1;

        for (int i = 0; i < n; i++) {
            if (count[a[i]] == 1 && a[i] > best) {
                best = a[i];
                winner = i + 1;
            }
        }

        if (winner == -1) {
            System.out.println("none");
        } else {
            System.out.println(winner);
        }
    }
}
