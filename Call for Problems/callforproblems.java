import java.util.Scanner;

public class callforproblems {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        
        int excluded = 0;

        for (int i = 0; i < n; i++) {
            int d = scanner.nextInt();

            if (d % 2 != 0) {
                excluded++;
            }
        }

        System.out.println(excluded);
    }
}
