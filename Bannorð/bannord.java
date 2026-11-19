import java.util.Scanner;

public class bannord {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String forbidden = scanner.nextLine(), memo = scanner.nextLine();

        StringBuilder output = new StringBuilder();
        int i = 0, n = memo.length();

        while (i < n) {
            if (memo.charAt(i) == ' ') {
                output.append(" ");
                i++;
                continue;
            }

            int j = i;
            boolean bad = false;

            while (j < n && memo.charAt(j) != ' ') {
                if (forbidden.indexOf(memo.charAt(j)) != -1) {
                    bad = true;
                }

                j++;
            }

            for (int k = i; k < j; k++) {
                if (bad) {
                    output.append("*");
                } else {
                    output.append(memo.charAt(k));
                }
            }

            i = j;
        }

        System.out.println(output);
    }
}
