import java.util.*;

public class java_DCBisht14 {
    static boolean f(int a[][],int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] != a[n-1-i][n-1-j]) 
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[][]=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=sc.nextInt();
            }
        }
        if(f(a,n)){
            System.out.println("The graph is Bipartite!");
        }
        else{
            System.out.println("The graph is not a Bipartite!");
        }
        sc.close();
    }
}
