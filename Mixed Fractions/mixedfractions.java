import java.util.Scanner;

public class mixedfractions {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextLong()) {
            long numerator = scanner.nextLong(), denominator = scanner.nextLong();

            if (numerator == 0 && denominator == 0) {
                break;
            }

            System.out.println(numerator / denominator + " " + numerator % denominator + " / " + denominator);
        }
    }
}
