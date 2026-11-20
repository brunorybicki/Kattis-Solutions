import java.util.Locale;
import java.util.Scanner;

public class alphabetspam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String s = scanner.next();

        int n = s.length(), whitespace = 0, lowercase = 0, uppercase = 0, symbols = 0;

        for (int i = 0; i < n; i++) {
            char c = s.charAt(i);

            if (c == '_') {
                whitespace++;
            } else if (c >= 'a' && c <= 'z') {
                lowercase++;
            } else if (c >= 'A' && c <= 'Z') {
                uppercase++;
            } else {
                symbols++;
            }
        }

        System.out.println(String.format(Locale.US, "%.15f", (double) whitespace / n));
        System.out.println(String.format(Locale.US, "%.15f", (double) lowercase / n));
        System.out.println(String.format(Locale.US, "%.15f", (double) uppercase / n));
        System.out.println(String.format(Locale.US, "%.15f", (double) symbols / n));
    }
}
