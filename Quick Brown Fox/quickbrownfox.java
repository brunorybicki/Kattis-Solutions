import java.util.Scanner;

public class quickbrownfox {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        scanner.nextLine();

        for (int test = 0; test < n; test++) {
            String phrase = scanner.nextLine();

            boolean[] seen = new boolean[26];

            for (int i = 0; i < phrase.length(); i++) {
                char c = Character.toLowerCase(phrase.charAt(i));

                if (c >= 'a' && c <= 'z') {
                    seen[c - 'a'] = true;
                }
            }

            String missing = "";

            for (int i = 0; i < 26; i++) {
                if (!seen[i]) {
                    missing += (char) ('a' + i);
                }
            }

            if (missing.isEmpty()) {
                System.out.println("pangram");
            } else {
                System.out.println("missing " + missing);
            }
        }
    }
}
