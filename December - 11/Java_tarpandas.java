import java.util.Scanner;

public class Java_tarpandas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        /*
         *  Input pattern:
         *      _,~,_,_,_,_,~,_,_,~,_,~
         *      2,1,1,1,2,1,2,1
        */
        String inputObstacles = sc.nextLine();
        String arr[] = inputObstacles.split(",");

        String inputNumbers = sc.nextLine();
        String jump[] = inputNumbers.split(",");
        
        int jumpCount = -1,  jumpIter = 0, arrIter = 0;
        while(arrIter < arr.length) {
            if(arr[arrIter].equals("_")){
                if(jump[jumpIter].equals("2")) {
                    arrIter += 2;
                } else if(jump[jumpIter].equals("1")) {
                    arrIter += 1;
                }
                jumpCount += 1;
                jumpIter += 1;
                // System.out.println(arr[arrIter]+" "+jumpCount+" "+arrIter);
            }else if(arr[arrIter].equals("~")){
                break;
            }
        }
        System.out.println("Score ="+jumpCount);
    }
}