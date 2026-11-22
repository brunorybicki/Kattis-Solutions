import java.util.Scanner;

public class cudoviste {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int r = scanner.nextInt(), c = scanner.nextInt();

        String[] map = new String[r];

        for (int i = 0; i < r; i++) {
            map[i] = scanner.next();
        }

        int[] spaces = new int[5];

        for (int i = 0; i < r - 1; i++) {
            for (int j = 0; j < c - 1; j++) {
                int buildings = 0, cars = 0;

                for (int a = i; a <= i + 1; a++) {
                    for (int b = j; b <= j + 1; b++) {
                        if (map[a].charAt(b) == '#') {
                            buildings++;
                        } else if (map[a].charAt(b) == 'X') {
                            cars++;
                        }
                    }
                }

                if (buildings == 0) {
                    spaces[cars]++;
                }
            }
        }

        for (int i = 0; i < 5; i++) {
            System.out.println(spaces[i]);
        }
    }
}
