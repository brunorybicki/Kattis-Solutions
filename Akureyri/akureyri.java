import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class akureyri {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        Map<String, Integer> counts = new HashMap<>();

        for (int i = 0; i < N; i++) {
            String name = scanner.next();
            String location = scanner.next();

            counts.put(location, counts.getOrDefault(location, 0) + 1);
        }

        for (Map.Entry<String, Integer> entry : counts.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }
}
