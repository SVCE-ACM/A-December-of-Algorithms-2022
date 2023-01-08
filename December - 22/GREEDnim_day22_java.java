package acm;

import java.util.Scanner;

public class GREEDnim_day22_java {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String ciper=in.next();
       String toEncrypt=in.next();
        StringBuilder ans=new StringBuilder();

        int j=0;
        for(int i=0;i<toEncrypt.length() ;i++)
        {
            j%=ciper.length();
            int dif=ciper.charAt(j)-'A';
            int curChar=toEncrypt.charAt(i)-'A' ;
            int ansChar=( curChar + dif ) %26;
            ans.append( (char)(ansChar+'A') );
            j++;
        }
        System.out.println(ans);
    }
}
