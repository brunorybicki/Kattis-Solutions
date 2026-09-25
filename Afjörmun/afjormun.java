import java.util.Scanner;

public class afjormun {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine().trim());

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < n; i++) {
            String sentence = scanner.nextLine();

            result.append(Character.toUpperCase(sentence.charAt(0)));
            result.append(sentence.substring(1).toLowerCase());
            result.append('\n');
        }

        System.out.print(result);
    }
}
