import java.util.*;

public class java_DCBisht22 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String ct=sc.nextLine();
        String s=sc.nextLine();
        int a[]=new int[ct.length()];
        for(int i=0;i<ct.length();i++){
            char c=ct.charAt(i);
            a[i]=c-65;

        }
        String ans="";
        int k=0;
        for(int i=0;i<s.length();i++){
            if(k==ct.length()){
                k=0;
            }
            int x=s.charAt(i)+a[k++];
            if(x>90){
                x=x-26;
            }
            char c=(char)x;
            ans=ans+c;

        }
        System.out.println(ans);
        sc.close();
    }
}
