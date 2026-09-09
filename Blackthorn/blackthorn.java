import java.util.Scanner;

public class blackthorn {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();

        boolean found = false;

        for (int i = 0; i + 2 < s.length(); i++) {
            if (s.charAt(i) == 'k' && s.charAt(i + 1) == 't' && s.charAt(i + 2) == 'h') {
                found = true;
                break;
            }
        }

        if (found) {
            System.out.println("yes");
        } else {
            System.out.println("no");
        }
    }
}
