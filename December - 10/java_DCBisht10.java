import java.util.*;

public class java_DCBisht10 {

    static boolean f(String s, int l){
            int x=0;
            for(int i=0;i<l;i++){
                char c=s.charAt(i);
                if(c=='a' || c=='e' || c=='i'|| c=='o'|| c=='u'){
                    x=0;
                }
                else{
                    x++;
                }
                if(x>=4){
                    return false;
                }
            }
            return true;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int T=Integer.parseInt(sc.nextLine());
        // System.out.println(T);
        while(T-->0){
            int n=Integer.parseInt(sc.nextLine());
            String w=sc.nextLine();
            // n=w.length();
            if(f(w,n)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }

        sc.close();
    }
}
