import java.util.Scanner;

public class flatbokuskortur {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        int z = scanner.nextInt();

        int bigSize = x * x, smallSize = y * y;

        if (smallSize * z >= bigSize) {
            System.out.println("Jebb");
        } else {
            System.out.println("Neibb");
        }
    }
}
