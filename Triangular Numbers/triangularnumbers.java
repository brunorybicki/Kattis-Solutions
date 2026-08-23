import java.util.Scanner;

public class triangularnumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        
        int number = 0;

        for (int i = 1; i <= n; i++) {
            number += i;
            System.out.println(number);
        }
    }
}
