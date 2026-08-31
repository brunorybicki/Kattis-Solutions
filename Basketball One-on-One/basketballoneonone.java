import java.util.Scanner;

public class basketballoneonone {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String record = scanner.next();

        int scoreA = 0, scoreB = 0;

        for (int i = 0; i < record.length(); i += 2) {
            int points = Character.getNumericValue(record.charAt(i + 1));

            if (record.charAt(i) == 'A') {
                scoreA += points;
            } else {
                scoreB += points;
            }
        }

        if (scoreA > scoreB) {
            System.out.println("A");
        } else {
            System.out.println("B");
        }
    }
}
