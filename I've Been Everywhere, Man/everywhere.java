import java.util.Scanner;

public class everywhere {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();

        String city[] = new String[100];

        for (int i = 0; i < T; i++) {
            int n = scanner.nextInt();

            for (int j = 0; j < n; j++) {
                city[j] = scanner.next();
            }

            int distinctCities = 0;

            for (int j = 0; j < n; j++) {
                int seenBefore = 0;

                for (int k = 0; k < j; k++) {
                    if (city[j].equals(city[k])) {
                        seenBefore = 1;
                        break;
                    }
                }

                if (seenBefore == 0) {
                    distinctCities++;
                }
            }

            System.out.println(distinctCities);
        }
	}
}
