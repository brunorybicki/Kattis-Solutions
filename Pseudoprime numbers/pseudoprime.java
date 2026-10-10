import java.math.BigInteger;
import java.util.Scanner;

public class pseudoprime {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            int p = scanner.nextInt(), a = scanner.nextInt();

            if (p == 0 || a == 0) {
                break;
            }

            boolean isPrime = true, isPseudoprime = false;

            for (long i = 2; i * i <= p; i++) {
                if (p % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (!isPrime) {
                BigInteger result = BigInteger.valueOf(a).modPow(BigInteger.valueOf(p), BigInteger.valueOf(p));

                if (result.intValue() == a % p) {
                    isPseudoprime = true;
                }
            }

            if (isPseudoprime) {
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
        }
    }
}
