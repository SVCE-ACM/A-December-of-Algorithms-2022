import java.util.Scanner;
public class Java_tarpandas {
    static void swap(char arr[], int iNum1, int iNum2) {
        char temp = arr[iNum1];
        arr[iNum1] = arr[iNum2];
        arr[iNum2] = temp;
    }
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        String inputString = sc.next().toUpperCase();
        char [] characterString = inputString.toCharArray();
        int i=0;
        while(i<characterString.length) {
            swap(characterString, i, i+1);
            i = i+2;
            if(i == characterString.length-1){
                break;
            }
        }
        for(char character : characterString) {
            System.out.print(character);
        }
        sc.close();
    }
}
