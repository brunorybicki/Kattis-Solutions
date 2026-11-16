import java.util.Scanner;

public class lostoncampus {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int w = scanner.nextInt(), h = scanner.nextInt();

        String[] grid = new String[h];
        int[][] dist = new int[h][w];

        for (int i = 0; i < h; i++) {
            grid[i] = scanner.next();

            for (int j = 0; j < w; j++) {
                dist[i][j] = 1000000;

                if (grid[i].charAt(j) == '*') {
                    dist[i][j] = 0;
                }
            }
        }

        int[] dr = {-1, 1, 0, 0}, dc = {0, 0, -1, 1};
        boolean changed = true;

        while (changed) {
            changed = false;

            for (int i = 1; i < h - 1; i++) {
                for (int j = 1; j < w - 1; j++) {
                    if (grid[i].charAt(j) == '#') {
                        continue;
                    }

                    int cost = 0;

                    if (grid[i].charAt(j) == 'D') {
                        cost = 1;
                    }

                    for (int d = 0; d < 4; d++) {
                        if (dist[i + dr[d]][j + dc[d]] + cost < dist[i][j]) {
                            dist[i][j] = dist[i + dr[d]][j + dc[d]] + cost;
                            changed = true;
                        }
                    }
                }
            }
        }

        int answer = 1000000;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (grid[i].charAt(j) == 'E' && dist[i][j] < answer) {
                    answer = dist[i][j];
                }
            }
        }

        if (answer == 1000000) {
            System.out.println("NOT POSSIBLE");
        } else {
            System.out.println(answer);
        }
    }
}
