import java.util.Scanner;
class Java_tarpandas{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String arr [] = new String[n];
        for(int i=0;i<n;i++) {
            arr[i] = sc.nextLine();
        }
        sc.close();
        String temp;
        for(int i=0;i<n;i++) {
            temp = arr[i].substring(1,arr[i].length()-1);
            String tempArr[] = new String[arr[i].length()];
            tempArr = temp.split(",");
            for(int j=0;j<tempArr.length;j++){
                int tempValue = Integer.parseInt(tempArr[j].trim(), 16);
                if(j==0){
                    System.out.print(Character.toUpperCase((char) tempValue));
                } else {
                    System.out.print((char) tempValue);
                }
            }
            System.out.println();
        }
    }
}