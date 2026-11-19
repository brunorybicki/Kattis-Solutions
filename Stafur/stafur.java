import java.util.Scanner;

public class stafur {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        char letter = scanner.next().charAt(0);

        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
            System.out.println("Jebb");
        } else if (letter == 'Y') {
            System.out.println("Kannski");
        } else {
            System.out.println("Neibb");
        }
    }
}
