import java.util.*;

public class java_DCBisht08 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int l=s.length();
        char c=' ';
        if(l%2!=0){
            c=s.charAt(l-1);
        }
        String ans="";
        for(int i=0;i<l-1;i+=2){
            ans=ans+s.charAt(i+1)+s.charAt(i);
        }
        if(l%2!=0){
            ans=ans+c;
        }
        System.out.println(ans);

        sc.close();
    }
}
