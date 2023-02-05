package acm;

import java.util.Scanner;

public class GREEDnim_day11_java {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String s=in.next();
        String steps=in.next();
        int curPos=0;
        int i=0;
        boolean flag=false;
        while(curPos<s.length())
        {
            if(s.charAt(curPos)=='~')
            {
                flag=true;
                break;
            }
            curPos= curPos + steps.charAt(i++)-'0';
//            System.out.println(curPos);
        }
        if(flag) i--;
        System.out.println("score : "+i);

    }
}
