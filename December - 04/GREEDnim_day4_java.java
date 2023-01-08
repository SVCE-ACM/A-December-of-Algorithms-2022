

import java.util.Arrays;
import java.util.Scanner;

public class GREEDnim_day4_java {

    public static void main(String[] args) {

        // getting input;
        Scanner in=new Scanner(System.in);
        System.out.print("No of Days : ");
        int days=in.nextInt();
        System.out.println( "Given stock market change values:");
        int[] inp=new int[days];
        for(int i=0;i<days;i++)
        {
            inp[i]=in.nextInt();
        }
        
        // kadanes algorithm
        int maxSum=Integer.MIN_VALUE;
        int maxStartIndex=Integer.MIN_VALUE;
        int maxEndIndex=Integer.MIN_VALUE;

        int curSum=Integer.MIN_VALUE;
        int curStartIndex=Integer.MIN_VALUE;
        int curEndIndex=Integer.MIN_VALUE;

        System.out.println(Arrays.toString(inp));
        for(int i=0;i<inp.length;i++)
        {
           if(curSum<=0 && inp[i]>curSum)
           {
               curSum=inp[i];
               curStartIndex=i;
           }
           else
           {
               curSum+=inp[i];
           }
            curEndIndex=i;
            if(curSum>maxSum)
            {
                maxSum=curSum;
                maxStartIndex=curStartIndex;
                maxEndIndex=curEndIndex;
            }
        }
        System.out.println("Profited value : "+maxSum);
        System.out.println( "proposed day to sell: Day:  "+ (maxStartIndex+1) +" to Day : "+(maxEndIndex+1));
        System.out.println("stock market change values :" +Arrays.toString(Arrays.copyOfRange(inp,maxStartIndex,maxEndIndex+1)));



    }
}
