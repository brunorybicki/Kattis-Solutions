import java.util.Scanner;

public class heimavinna {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int count = 0;

        for (String problem : scanner.next().split(";")) {
            String[] numbers = problem.split("-");
            int first = Integer.parseInt(numbers[0]);
            int last = Integer.parseInt(numbers[numbers.length - 1]);
            count += last - first + 1;
        }

        System.out.println(count);
    }
}
