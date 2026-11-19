import java.util.Scanner;

public class ptice {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        String answers = scanner.next();

        String[] names = {"Adrian", "Bruno", "Goran"}, patterns = {"ABC", "BABC", "CCAABB"};
        int[] score = new int[3];
        int best = 0;

        for (int i = 0; i < 3; i++) {
            int length = patterns[i].length();

            for (int j = 0; j < n; j++) {
                if (answers.charAt(j) == patterns[i].charAt(j % length)) {
                    score[i]++;
                }
            }

            if (score[i] > best) {
                best = score[i];
            }
        }

        System.out.println(best);

        for (int i = 0; i < 3; i++) {
            if (score[i] == best) {
                System.out.println(names[i]);
            }
        }
    }
}
