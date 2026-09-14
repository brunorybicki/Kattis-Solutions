import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class avion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Integer> found = new ArrayList<>();

        for (int i = 1; i <= 5; i++) {
            String line = scanner.next();

            if (line.contains("FBI")) {
                found.add(i);
            }
        }

        if (found.isEmpty()) {
            System.out.println("HE GOT AWAY!");
        } else {
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < found.size(); i++) {
                sb.append(found.get(i));

                if (i != found.size() - 1) {
                    sb.append(" ");
                }
            }

            System.out.println(sb);
        }
    }
}
