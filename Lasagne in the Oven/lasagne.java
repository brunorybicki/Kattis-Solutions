import java.util.Scanner;

public class lasagne {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int f = scanner.nextInt();

        int c = (int) Math.round((f - 32) * 5.0 / 9.0);
        System.out.println(c);
    }
}
