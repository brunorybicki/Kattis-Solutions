import java.util.Scanner;

public class anotherdimension {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double d = scanner.nextDouble();

        double volume = 2.0 / 3.0 * Math.acos(-1.0) * Math.pow(d / 2.0, 3);
        System.out.printf("%.14f", volume);
    }
}
