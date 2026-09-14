import java.util.Scanner;

public class gettingwood {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();

        for (int i = 0; i + 3 < s.length(); i++) {
            if (s.charAt(i) == 't' && s.charAt(i + 1) == 'r' && s.charAt(i + 2) == 'e' && s.charAt(i + 3) == 'e') {
                System.out.println(i);
                return;
            }
        }

        System.out.println("no trees here");
    }
}
