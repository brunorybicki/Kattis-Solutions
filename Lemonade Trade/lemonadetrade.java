import java.util.HashMap;
import java.util.Locale;
import java.util.Scanner;

public class lemonadetrade {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        HashMap<String, Double> logAmount = new HashMap<>();
        logAmount.put("pink", 0.0);

        for (int i = 0; i < n; i++) {
            String offered = scanner.next(), wanted = scanner.next();
            double rate = Double.parseDouble(scanner.next());

            if (!logAmount.containsKey(wanted)) {
                continue;
            }

            double value = logAmount.get(wanted) + Math.log(rate);

            if (!logAmount.containsKey(offered) || value > logAmount.get(offered)) {
                logAmount.put(offered, value);
            }
        }

        double blue = 0;

        if (logAmount.containsKey("blue")) {
            blue = Math.exp(logAmount.get("blue"));
        }

        if (blue > 10) {
            blue = 10;
        }

        System.out.println(String.format(Locale.US, "%.15f", blue));
    }
}
