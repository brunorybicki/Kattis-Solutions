import java.util.Scanner;

public class skammstofun {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        StringBuilder abbreviation = new StringBuilder();

        for (int i = 0; i < n; i++) {
            String word = scanner.next();

            if (word.charAt(0) >= 'A' && word.charAt(0) <= 'Z') {
                abbreviation.append(word.charAt(0));
            }
        }

        System.out.println(abbreviation);
    }
}
