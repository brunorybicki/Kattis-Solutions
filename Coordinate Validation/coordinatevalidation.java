import java.util.Scanner;

public class coordinatevalidation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            double longitude = scanner.nextDouble(), latitude = scanner.nextDouble();

            if (longitude >= -180 && longitude <= 180 && latitude >= -90 && latitude <= 90) {
                System.out.println("VALID");
            } else {
                System.out.println("INVALID");
            }
        }
    }
}
