import java.math.BigInteger;
import java.util.Scanner;

public class modulararithmetic {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            BigInteger n = scanner.nextBigInteger();
            int t = scanner.nextInt();

            if (n.signum() == 0 && t == 0) {
                break;
            }

            for (int i = 0; i < t; i++) {
                BigInteger x = scanner.nextBigInteger();
                char operator = scanner.next().charAt(0);
                BigInteger y = scanner.nextBigInteger();

                if (operator == '+') {
                    System.out.println(x.add(y).mod(n));
                } else if (operator == '-') {
                    System.out.println(x.subtract(y).mod(n));
                } else if (operator == '*') {
                    System.out.println(x.multiply(y).mod(n));
                } else if (operator == '/') {
                    if (!y.gcd(n).equals(BigInteger.ONE)) {
                        System.out.println(-1);
                    } else {
                        System.out.println(x.multiply(y.modInverse(n)).mod(n));
                    }
                }
            }
        }
    }
}
