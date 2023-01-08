package acm;

import java.util.Scanner;

public class GREEDnim_day6_java
{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int pos=in.nextInt();

        // why do we need this array? we only need two numbers.
        int[]arr=new int[pos];
        for (int i = 0; i < pos; i++) {
            arr[i]=in.nextInt();
        }

        if(arr[pos-1]>=arr[0]) System.out.println("PLAYER 2 WINS");
        else System.out.println("PLAYER 1 WINS");
    }
}
