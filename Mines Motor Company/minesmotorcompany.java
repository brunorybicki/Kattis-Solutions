import java.util.Scanner;

public class minesmotorcompany {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();

        String firstPosition = scanner.next();
        int previousRow = firstPosition.charAt(0) - 'A';
        int previousColumn = firstPosition.charAt(1) - 'A';

        int totalDistance = 0;

        for (int i = 1; i < N; i++) {
            String nextPosition = scanner.next();

            int currentRow = nextPosition.charAt(0) - 'A';
            int currentColumn = nextPosition.charAt(1) - 'A';

            totalDistance += Math.abs(currentRow - previousRow) + Math.abs(currentColumn - previousColumn);

            previousRow = currentRow;
            previousColumn = currentColumn;
        }

        System.out.println(totalDistance);
    }
}
