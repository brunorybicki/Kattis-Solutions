import java.util.Scanner;

public class trulstroubles {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String notes = scanner.next();

        int truls = 0, henry = 0;

        for (int i = 0; i < notes.length(); i++) {
            if (notes.charAt(i) == 'T') {
                truls++;
            } else {
                henry++;
            }

            if ((truls >= 11 && truls - henry >= 2) || (henry >= 11 && henry - truls >= 2)) {
                truls = 0;
                henry = 0;
            }
        }

        System.out.println(truls + "-" + henry);
    }
}
