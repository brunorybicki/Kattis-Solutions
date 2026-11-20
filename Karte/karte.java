import java.util.Scanner;

public class karte {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String s = scanner.next(), suits = "PKHT";

        int[][] seen = new int[4][14];
        int[] count = new int[4];
        boolean duplicate = false;

        for (int i = 0; i < s.length(); i += 3) {
            int suit = suits.indexOf(s.charAt(i));
            int number = (s.charAt(i + 1) - '0') * 10 + (s.charAt(i + 2) - '0');

            if (seen[suit][number] == 1) {
                duplicate = true;
            }

            seen[suit][number] = 1;
            count[suit]++;
        }

        if (duplicate) {
            System.out.println("GRESKA");
        } else {
            System.out.println((13 - count[0]) + " " + (13 - count[1]) + " " + (13 - count[2]) + " " + (13 - count[3]));
        }
    }
}
