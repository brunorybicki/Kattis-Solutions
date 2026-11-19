import java.util.Scanner;

public class samfelagsmidlasvar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String last = "";

        while (scanner.hasNext()) {
            last = scanner.next();
        }

        System.out.println(last + "slop");
    }
}
