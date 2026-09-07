import java.util.Scanner;

public class nameformatting {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String lastname = scanner.next();
        lastname = lastname.substring(0, lastname.length() - 1);
        String firstname = scanner.next();

        System.out.println(Character.toUpperCase(firstname.charAt(0)) + ". " + Character.toUpperCase(lastname.charAt(0)) + lastname.substring(1));
    }
}
