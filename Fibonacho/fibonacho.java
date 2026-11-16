import java.util.Scanner;

public class fibonacho {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a3 = scanner.nextInt(), a4 = scanner.nextInt(), a5 = scanner.nextInt();

        int a2 = a5 - a4, a1 = a4 - a3, a0 = a3 - a2;

        System.out.println(a0 + " " + a1 + " " + a2);
    }
}
