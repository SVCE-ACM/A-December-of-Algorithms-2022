
import java.io.*;

public class java_DCBisht07 {
    boolean [][] visited;
    int n,m;
    public  boolean exist(char[][] board, String word) {
        n=board.length;
        m=board[0].length;
        visited=new boolean[n][m];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word.charAt(0)){
                    if(valid(i,j,0,board,word)){
                        return true;
                    }
                }
            }
        }
        return false;
    }

    public boolean valid(int i,int j,int count,char [][] board,String word){
        /*-------------base conditions-------------*/
        //out of bound
        if(i<0 || i>=n || j<0 || j>=m ){
            return false;
        }

        //if already visited
        if(visited[i][j]){
            return false;
        }

        //mismatch
        if(word.charAt(count)!=board[i][j]){
            return false;
        }

        //if word is found
        if(count==word.length()-1){
            return true;
        }

        /*----------------calculation and recursive calls----------*/

        //mark current visited
        visited[i][j]=true;

        //inc count
        count++;

        //down,right,up,left search
        if(valid(i+1,j,count,board,word) ||
           valid(i,j+1,count,board,word) ||
           valid(i-1,j,count,board,word) ||
           valid(i,j-1,count,board,word) ){
               return true;
           }
        
        //mark current cell unvisited
        visited[i][j]=false;
        
        return false;

    }

// Driver Code
public static void main(String[] args)throws IOException
{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
            String[] S = br.readLine().trim().split(" ");
            int n = Integer.parseInt(S[0]);
            int m = Integer.parseInt(S[1]);
            char [][] board = new char[n][m];
            for(int i = 0; i < n; i++){
                String[] s = br.readLine().trim().split(" ");
                for(int j = 0; j < m; j++){
                    board[i][j] = s[j].charAt(0);
                }
            }
            String word = br.readLine().trim();
            java_DCBisht07  ob=new java_DCBisht07 ();
            boolean ans = ob.exist(board, word);
            if(ans)
                System.out.println("Found");
            else
                System.out.println("Not Found");
       
    }

}



