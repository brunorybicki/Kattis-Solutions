import java.util.Scanner;

public class t9spelling {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        scanner.nextLine();

        for (int t = 0; t < N; t++) {
            String message = scanner.nextLine();

            System.out.print("Case #" + (t + 1) + ": ");

            char lastDigit = '\0';

            for (int i = 0; i < message.length(); i++) {
                String presses = "";

                char c = message.charAt(i);

                if (c == 'a') {
                    presses = "2";
                } else if (c == 'b') {
                    presses = "22";
                } else if (c == 'c') {
                    presses = "222";
                } else if (c == 'd') {
                    presses = "3";
                } else if (c == 'e') {
                    presses = "33";
                } else if (c == 'f') {
                    presses = "333";
                } else if (c == 'g') {
                    presses = "4";
                } else if (c == 'h') {
                    presses = "44";
                } else if (c == 'i') {
                    presses = "444";
                } else if (c == 'j') {
                    presses = "5";
                } else if (c == 'k') {
                    presses = "55";
                } else if (c == 'l') {
                    presses = "555";
                } else if (c == 'm') {
                    presses = "6";
                } else if (c == 'n') {
                    presses = "66";
                } else if (c == 'o') {
                    presses = "666";
                } else if (c == 'p') {
                    presses = "7";
                } else if (c == 'q') {
                    presses = "77";
                } else if (c == 'r') {
                    presses = "777";
                } else if (c == 's') {
                    presses = "7777";
                } else if (c == 't') {
                    presses = "8";
                } else if (c == 'u') {
                    presses = "88";
                } else if (c == 'v') {
                    presses = "888";
                } else if (c == 'w') {
                    presses = "9";
                } else if (c == 'x') {
                    presses = "99";
                } else if (c == 'y') {
                    presses = "999";
                } else if (c == 'z') {
                    presses = "9999";
                } else {
                    presses = "0";
                }

                if (presses.charAt(0) == lastDigit) {
                    System.out.print(" ");
                }

                System.out.print(presses);

                lastDigit = presses.charAt(0);
            }

            System.out.println();
        }

        scanner.close();
    }
}
