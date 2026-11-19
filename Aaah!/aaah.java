import java.util.Scanner;

public class aaah {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String jon = scanner.next(), doctor = scanner.next();

        if (jon.length() >= doctor.length()) {
            System.out.println("go");
        } else {
            System.out.println("no");
        }
    }
}
