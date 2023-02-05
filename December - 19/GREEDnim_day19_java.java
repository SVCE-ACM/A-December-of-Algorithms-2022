package acm;

import java.util.Locale;
import java.util.Scanner;

public class GREEDnim_day19_java {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String big=in.nextLine().toLowerCase();
        String smol=in.nextLine().toLowerCase();
        big=big.replaceAll("[^a-z]+", "");
        smol=smol.replaceAll("[^a-z]+", "");
        int[]map=new int[26];
        for(char s:smol.toCharArray())
        {
            map[s-'a']++;
        }

        int s=0;
        int e=0;
        while(e<big.length())
        {
            int index=big.charAt(e++)-'a';
            map[index]--;
            if(map[index]<0)
            {
                for(;map[index]<0;s++) map[big.charAt(s)-'a']++;
            }
            if(e-s == smol.length()) break;
        }
        System.out.println(big.substring(s,e));

    }
}
