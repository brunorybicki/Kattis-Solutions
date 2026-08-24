import java.util.Scanner;

public class provincesandgold {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int G = scanner.nextInt();
        int S = scanner.nextInt();
        int C = scanner.nextInt();

        int power = 3 * G + 2 * S + C;

        if (power >= 8) {
            if (power >= 6) {
                System.out.println("Province or Gold");
            } else if (power >= 3) {
                System.out.println("Province or Silver");
            } else {
                System.out.println("Province or Copper");
            }
        } else if (power >= 5) {
            if (power >= 6){
                System.out.println("Duchy or Gold");
            } else if (power >= 3) {
                System.out.println("Duchy or Silver");
            } else {
                System.out.println("Duchy or Copper");
            }
        } else if (power >= 2) {
            if (power >= 3) {
                System.out.println("Estate or Silver");
            } else {
                System.out.println("Estate or Copper");
            }
        } else {
            System.out.println("Copper");
        }
    }
}
