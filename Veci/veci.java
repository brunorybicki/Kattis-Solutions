import java.util.Scanner;

public class veci {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        char[] x = scanner.next().toCharArray();

        int n = x.length, i = n - 2;

        while (i >= 0 && x[i] >= x[i + 1]) {
            i--;
        }

        if (i < 0) {
            System.out.println("0");
            return;
        }

        int j = n - 1;

        while (x[j] <= x[i]) {
            j--;
        }

        char temp = x[i];
        x[i] = x[j];
        x[j] = temp;

        for (int a = i + 1, b = n - 1; a < b; a++, b--) {
            temp = x[a];
            x[a] = x[b];
            x[b] = temp;
        }

        System.out.println(new String(x));
    }
}
