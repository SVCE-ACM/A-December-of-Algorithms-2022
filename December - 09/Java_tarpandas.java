import java.util.Scanner;
public class Java_tarpandas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int noOfWords = sc.nextInt();
        sc.nextLine();
        String [] arr = new String[noOfWords] ;

        for(int i=0; i< noOfWords; i++) {
            arr[i] = sc.next();
        }

        String choiceString = "";
        int maxStringLength = 0;
        for(int i=0; i< arr.length; i++) {
            if(arr[i].length() % 2 != 0 && arr[i].length() > maxStringLength) {
                maxStringLength = arr[i].length();
                choiceString = arr[i];
            }
        }

        if(choiceString.length() == 0) {
            System.out.println("Better luck next time");
        } else {
            System.out.println(choiceString);
        }

        sc.close();
    }
}
