import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class everyotherletter {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0) {
                result.append(s.charAt(i));
            }
        }

        System.out.println(result);
    }
}
