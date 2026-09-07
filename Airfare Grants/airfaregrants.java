import java.util.Scanner;

public class airfaregrants {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int minPrice = 1000000, maxPrice = 0;

        for (int i = 0; i < n; i++) {
            int p = scanner.nextInt();

            if (p < minPrice) {
                minPrice = p;
            }
            if (p > maxPrice) {
                maxPrice = p;
            }
        }

        int reimbursed;
        
        if (minPrice < maxPrice / 2) {
            reimbursed = minPrice;
        } else {
            reimbursed = maxPrice / 2;
        }

        System.out.println(minPrice - reimbursed);
    }
}
