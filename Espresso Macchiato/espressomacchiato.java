import java.util.Scanner;

public class espressomacchiato {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        StringBuilder output = new StringBuilder();

        for (int test = 0; test < t; test++) {
            int n = scanner.nextInt();

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i + j == n - 1) {
                        output.append("C");
                    } else {
                        output.append(".");
                    }
                }

                output.append("\n");
            }
        }

        System.out.print(output);
    }
}
