package acm;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;


public class GREEDnim_day14_java {

// map for every vetex and its group 
    static HashMap<Integer,Integer>map=new HashMap<>();

// checker to check if ive already visited the node and placed it in correct group
    static boolean[] check;
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        check=new boolean[n];
        int[][] inp=new int[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                inp[i][j]=in.nextInt();
            }
        }

        boolean ans=true;
        for(int i=0;i<n;i++)
        {
            if(!check[i])
            {
              ans=ans && isBipartate(inp,i);
            }
        }
        if(ans) System.out.println("graph is bipartite");
        else System.out.println("graph not bipartite");




    }
    public static boolean isBipartate(int[][] inp,int cur)
    {

        // making the current element as group 0, adding group to its neighbours as 1 and putting neighbours into queue for bfs
        Queue<Integer>q=new LinkedList<>();
        map.put(cur,0);
        check[cur]=true;
        for(int i=0;i<inp[0].length;i++)
        {
            if(inp[0][i]==1)
            {
                if(  map.get(i)!=null && map.get(i)==0) return false;
                map.put(i,1);
                q.offer(i);
            }
        }
        while(!q.isEmpty()){
            int row=q.poll();
            int curG=map.get(row);
            int otherG=0;
            if(curG==0) otherG=1;
            if(check[row]) continue;
            check[row]=true;
            for(int i=0;i<inp[row].length;i++)
            {
                if(inp[row][i]==1)
                {
                    if( map.get(i)!=null && map.get(i)==curG) return false;
                    map.put(i,otherG);
                    q.offer(i);
                }
            }
        }
        return true;
    }
}
