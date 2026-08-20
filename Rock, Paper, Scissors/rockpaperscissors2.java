import java.util.Scanner;

public class rockpaperscissors2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char player1 = scanner.next().charAt(0);
        char player2 = scanner.next().charAt(0);

        if (player1 == player2) {
            System.out.println("Draw");
        } else if ((player1 == 's' && player2 == 'p') || (player1 == 'r' && player2 == 's') || (player1 == 'p' && player2 == 'r')) {
            System.out.println("Player 1");
        } else {
            System.out.println("Player 2");
        }
    }
}
