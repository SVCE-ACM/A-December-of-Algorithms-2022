package acm;

import java.util.HashSet;
import java.util.Scanner;

public class GREEDnim_day10_java {
    public static void main(String[] args) {
        HashSet<Character>vowels=new HashSet<>();
        char[] vow={'a','e','i','o','u'};
        for(char e:vow) vowels.add(e);
        Scanner  in=new Scanner(System.in);
        int t=in.nextInt();

        for(int j=0;j<t;j++)
        {
            boolean flag=false;
            in.next();
            String s=in.next();
            int consonantCount=0;
            for(int i=0;i<s.length();i++)
            {
                    if(vowels.contains(s.charAt(i))) consonantCount=0;
                    else consonantCount++;
                    if(consonantCount>=4)
                    {
                       flag=true;
                       break;
                    }
            }
            if(flag) System.out.println("NO");
            else System.out.println("YES");
        }

    }
}
