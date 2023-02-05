package acm;

import java.util.Scanner;

public class GREEDnim_day31_java {
    static boolean[][] placedQueens;
    static int count=0;
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        placedQueens=new boolean[n][n];
        placeQueens(0);
        System.out.println("no of combinations "+count);
    }
    public static void placeQueens(int row)
    {
        if(row==placedQueens.length)
        {
            count++;
            printQueens();
            return;
        }
        for(int i=0;i< placedQueens.length;i++)
        {
            if(placable(row,i))
            {
                placedQueens[row][i]=true;
                placeQueens(row+1);
                placedQueens[row][i]=false;
            }
        }
    }
    public static boolean placable(int row,int col)
    {

        //vertical top
        for(int i=row-1;i>=0;i--)
        {
            if(placedQueens[i][col]) return false;
        }
        //left top diagonal
        for(int i=row-1, j=col-1; i>=0 && j>=0 ; i--,j--)
        {
            if(placedQueens[i][j]) return false;
        }
        //right top diagonal
        for(int i=row-1,j=col+1; i>=0 && j<placedQueens.length; i--,j++)
        {
            if(placedQueens[i][j]) return false;
        }
        return true;
    }
    public static void printQueens()
    {
        for(int i=0;i< placedQueens.length;i++)
        {
            for(int j=0;j< placedQueens[0].length;j++)
            {
                if(placedQueens[i][j]) System.out.print("Q ");
                else System.out.print(". ");
            }
            System.out.println();
        }
        System.out.println();
    }

}
