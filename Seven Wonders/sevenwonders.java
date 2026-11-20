import java.util.Scanner;

public class sevenwonders {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String cards = scanner.next();

        int tablets = 0, compasses = 0, gears = 0;

        for (int i = 0; i < cards.length(); i++) {
            if (cards.charAt(i) == 'T') {
                tablets++;
            } else if (cards.charAt(i) == 'C') {
                compasses++;
            } else {
                gears++;
            }
        }

        int sets = Math.min(tablets, Math.min(compasses, gears));

        System.out.println(tablets * tablets + compasses * compasses + gears * gears + 7 * sets);
    }
}
