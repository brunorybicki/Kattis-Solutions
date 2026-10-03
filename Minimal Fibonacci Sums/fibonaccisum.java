import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class fibonaccisum {
    static long fibonacci(int n) {
        long a = 0, b = 1, c;

        if (n == 0) {
            return a;
        } else if (n == 1) {
            return b;
        }

        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        return b;
    }

    static long maximumFibonacci(long n) {
        int i = 0;

        while (fibonacci(i + 1) <= n) {
            i++;
        }

        return fibonacci(i);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();

        List<Long> result = new ArrayList<>();

        while (n > 0) {
            long maximumFibonacciNumber = maximumFibonacci(n);
            result.add(maximumFibonacciNumber);
            n -= maximumFibonacciNumber;
        }

        for (int i = result.size() - 1; i >= 0; i--) {
            System.out.print(result.get(i));

            if (i > 0) {
                System.out.print(" ");
            } else {
                System.out.println();
            }
        }
    }
}
