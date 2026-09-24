import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class kinahvisl {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        String initialWord = reader.readLine().trim();
        String finalWord = reader.readLine().trim();

        int differences = 0;

        for (int i = 0; i < initialWord.length(); i++) {
            if (initialWord.charAt(i) != finalWord.charAt(i)) {
                differences++;
            }
        }

        System.out.println(differences + 1);
    }
}
