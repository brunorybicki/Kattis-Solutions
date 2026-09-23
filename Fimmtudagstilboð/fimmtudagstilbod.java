import java.util.Scanner;

public class fimmtudagstilbod {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int y = scanner.nextInt();
        
        if (y <= 2020) {
            System.out.printf("1000\n");
        } else {
            System.out.printf("%d\n", ((y - 2020) * 100) + 1000);
        }
    }
}
