import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class conformity {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        HashMap<String, Integer> popularity = new HashMap<>();

        for (int i = 0; i < n; i++) {
            int[] courses = new int[5];

            for (int j = 0; j < 5; j++) {
                courses[j] = scanner.nextInt();
            }

            Arrays.sort(courses);
            popularity.merge(Arrays.toString(courses), 1, Integer::sum);
        }

        int maximumPopularity = 0;

        for (int value : popularity.values()) {
            if (value > maximumPopularity) {
                maximumPopularity = value;
            }
        }

        int result = 0;

        for (int value : popularity.values()) {
            if (value == maximumPopularity) {
                result += value;
            }
        }

        System.out.println(result);
    }
}
