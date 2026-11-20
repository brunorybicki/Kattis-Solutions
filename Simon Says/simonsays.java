import java.util.Scanner;

public class simonsays {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        scanner.nextLine();

        for (int i = 0; i < n; i++) {
            String command = scanner.nextLine();

            if (command.startsWith("Simon says ")) {
                System.out.println(command.substring(10));
            }
        }
    }
}
