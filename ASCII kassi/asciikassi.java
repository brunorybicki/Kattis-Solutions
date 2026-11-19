import java.util.Scanner;

public class asciikassi {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        StringBuilder output = new StringBuilder();

        for (int i = 0; i < n + 2; i++) {
            for (int j = 0; j < n + 2; j++) {
                boolean rowEdge = i == 0 || i == n + 1, columnEdge = j == 0 || j == n + 1;

                if (rowEdge && columnEdge) {
                    output.append("+");
                } else if (rowEdge) {
                    output.append("-");
                } else if (columnEdge) {
                    output.append("|");
                } else {
                    output.append(" ");
                }
            }

            output.append("\n");
        }

        System.out.print(output);
    }
}
