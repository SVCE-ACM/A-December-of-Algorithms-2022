package acm;

import java.util.Scanner;

public class GREEDnim_day9_java {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int size=in.nextInt();
        String[] inp=new String[size];
        int maxLength=0;
        int ans=-1;
        for(int i=0;i<size;i++)
        {
            inp[i]=in.next();
            inp[i]=inp[i].trim();
            if(inp[i].length() %2!=0)
            {
                if(inp[i].length() > maxLength)
                {
                    maxLength=inp[i].length();
                    ans=i;
                }
            }
        }
        if(ans==-1) System.out.println("Better luck next time");
        System.out.println(inp[ans]);
    }
}
