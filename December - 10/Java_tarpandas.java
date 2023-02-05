import java.util.Scanner;
public class Java_tarpandas {
    static String count(String word) {
        int count = 0;
        for(int i=0; i<word.length(); i++) {
            Character tempChar = (Character) word.charAt(i);

            if(tempChar.equals('A') ||
            tempChar.equals('E') ||
            tempChar.equals('I') ||
            tempChar.equals('O') ||
            tempChar.equals('U') || 
            tempChar.equals('a') ||
            tempChar.equals('e') ||
            tempChar.equals('i') ||
            tempChar.equals('o') ||
            tempChar.equals('u')) {
                count = 0;
            } else {
                count++;
                if(count>=4) {
                    return "NO";
                }
            }
        }
        return "YES";
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int wordCount = sc.nextInt();
        String responses[] = new String[wordCount];

        for(int i = 0; i< wordCount; i++) {
            int charCount = sc.nextInt();
            sc.nextLine();
            String word = sc.next().substring(0,charCount);
            responses[i] = count(word);;
        }

        for(String answer : responses) {
            System.out.println(answer);
        }
        sc.close();
    }
}
