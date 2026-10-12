import java.util.Scanner;

public class isolationintrusion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();

        int[] m = new int[3];

        for (int i = 0; i < 3; i++) {
            m[i] = scanner.nextInt();
        }

        for (int i = 0; i < 3; i++) {
            boolean isolated = true;

            for (int j = 0; j < 3; j++) {
                if (j != i && m[i] + n >= m[j]) {
                    isolated = false;
                }
            }

            if (isolated) {
                System.out.println(m[i] + n);

                return;
            }
        }

        System.out.println("impossible");
    }
}
