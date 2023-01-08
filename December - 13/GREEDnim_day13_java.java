package acm;

import java.util.Arrays;

public class GREEDnim_day13_java {
    static int[][] ans;
    public static void main(String[] args) {

        int[][] inp={ {1,1,1,0},
                {1,0,1,1},
                {0,1,0,1},
                {0,1,1,1}};

        ans=new int[inp.length][inp[0].length];
        findOnePath(inp,0,0);
        for(int[] row:ans)
        {
            System.out.println(Arrays.toString(row));
        }

    }

    public static boolean findOnePath(int[][] inp,int i,int j)
    {
        if(i==inp.length-1 && j== inp[0].length) return true;

        if(i<0 || j<0 || i>=inp.length || j>=inp[0].length || inp[i][j]!=1) return false;
        ans[i][j]=1;
        boolean ansFound=findOnePath(inp,i,j+1) || findOnePath(inp,i+1,j);
        if(!ansFound) inp[i][j]=0;

        return ansFound;
    }
}
