import java.util.Scanner;
public class Java_tarpandas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String secretCode = sc.nextLine();

        int n = secretCode.length();

        String firstTwoLetters = secretCode.substring(n-4, n-2);
        secretCode = secretCode.substring(0,n-4);

        StringBuilder sb = new StringBuilder(firstTwoLetters);
        sb.append(secretCode);

        secretCode = sb.toString();

        System.out.println(secretCode);
        sc.close();
    }
}
