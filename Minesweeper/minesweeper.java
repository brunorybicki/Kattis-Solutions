import java.util.Scanner;

public class minesweeper {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int r = scanner.nextInt(), c = scanner.nextInt(), n = scanner.nextInt();

        char[][] board = new char[r][c];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                board[i][j] = '.';
            }
        }

        for (int i = 0; i < n; i++) {
            int a = scanner.nextInt(), b = scanner.nextInt();

            board[a - 1][b - 1] = '*';
        }

        for (int i = 0; i < r; i++) {
            System.out.println(new String(board[i]));
        }
    }
}
