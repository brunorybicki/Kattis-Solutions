import java.util.Scanner;

public class kanelbullar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int fr = scanner.nextInt();
        int yr = scanner.nextInt();
        int br = scanner.nextInt();
        int mr = scanner.nextInt();
        int sr = scanner.nextInt();

        int f = scanner.nextInt();
        int y = scanner.nextInt();
        int b = scanner.nextInt();
        int m = scanner.nextInt();
        int s = scanner.nextInt();

        int cinnamonBuns = Math.min(f / fr, Math.min(y / yr, Math.min(b / br, Math.min(m / mr, s / sr))));
        System.out.println(cinnamonBuns);
    }
}
