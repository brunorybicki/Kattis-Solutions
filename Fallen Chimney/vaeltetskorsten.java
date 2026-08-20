import java.util.Scanner;

public class vaeltetskorsten {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int max = -1;

        for (int j = 0; j < n; j++) {
            int i = scanner.nextInt();
            String response = scanner.next();

            if (response.charAt(0) == 'n') {
                if (i > max) {
                    max = i;
                }
            }
        }

        System.out.println(max);
    }
}
