import java.util.Scanner;

public class andmal {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String line = "";

        if (scanner.hasNextLine()) {
            line = scanner.nextLine();
        }

        if (line.equals("a")) {
            System.out.println("b");
        } else {
            System.out.println("a");
        }
    }
}
