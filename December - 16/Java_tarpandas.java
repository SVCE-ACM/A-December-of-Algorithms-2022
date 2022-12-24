import java.util.Scanner;
class Java_tarpandas {
    static int smallerNumber(int iNum1, int iNum2) {
        if(iNum1 > iNum2) {
            return iNum2;
        }
        return iNum1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("height = ");

        String input = sc.nextLine();

        String [] tempArr = input.split(",");
        int [] arr = new int [tempArr.length];

        for(int i=0;i<tempArr.length; i++) {
            arr[i] = Integer.parseInt(tempArr[i]);
        }

        int maxArea = 0;

        for(int i=0; i<arr.length; i++) {
            for(int j=i+1; j<arr.length; j++) {
                int tempNumber = smallerNumber(arr[i], arr[j]) * (j-i);

                if(tempNumber > maxArea) {
                    maxArea = tempNumber;
                }
            }
        }
        System.out.println(maxArea);
        sc.close();
    }
}