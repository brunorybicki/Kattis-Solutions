import java.util.Scanner;

public class whatisicpc {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String acronym = "";

        for (int i = 0; i < 4; i++) {
            String word = scanner.next();

            acronym += word.charAt(0);
        }

        if (acronym.equals("ICPC")) {
            System.out.println("1");
        } else {
            System.out.println("0");
        }
    }
}
