import java.util.Scanner;

public class intervals0 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();

        int[] hours = new int[24];

        for (int i = 0; i < n; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();

            for (int h = a; h < b; h++) {
                hours[h]++;
            }
        }

        int count = 0;

        for (int h = 0; h < 24; h++) {
            if (hours[h] >= k) {
                count++;
            }
        }

        System.out.println(count);
    }
}
