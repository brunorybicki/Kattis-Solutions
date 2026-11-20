import java.util.Scanner;

public class kemija {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String sentence = scanner.nextLine();

        StringBuilder output = new StringBuilder();
        int i = 0;

        while (i < sentence.length()) {
            output.append(sentence.charAt(i));

            if ("aeiou".indexOf(sentence.charAt(i)) != -1) {
                i += 2;
            }

            i++;
        }

        System.out.println(output);
    }
}
