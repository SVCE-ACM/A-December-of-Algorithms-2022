import java.util.*;

public class java_DCBisht13 {
    static int[][] ans;
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int[][] inp=new int[x][x];
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                inp[i][j]=sc.nextInt();
            }
        }
        ans=new int[x][x];
        findOnePath(inp,0,0);
        for(int[] row:ans)
        {
            System.out.println(Arrays.toString(row));
        }
        sc.close();
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
