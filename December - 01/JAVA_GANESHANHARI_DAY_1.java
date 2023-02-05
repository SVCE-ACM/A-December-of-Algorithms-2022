import java.util.*;
import java.util.Scanner;

public class JAVA_GANESHANHARI_DAY_1 {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        StringBuilder ans= new StringBuilder();
        int n=0;
        n=Integer.parseInt(s.nextLine().strip());

        for(int i=0;i<n;i++)
        {
            String aword=s.nextLine().strip();
            String[] word= aword.split("\\s+",0);
            
            for(String hex:word)
            {
                hex=hex.strip();
                int decimal=Integer.parseInt(hex,16);
                ans.append((char) decimal);
            }
            ans.append(" ");

        }
        System.out.println(ans);



    }
}