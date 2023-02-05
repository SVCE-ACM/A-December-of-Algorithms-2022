package acm;

import java.util.Scanner;

public class GREEDnim_day8_java {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        StringBuilder inp=new StringBuilder(in.next());
        for(int i=0;i+1<inp.length();i+=2)
        {
            char a=inp.charAt(i);
            char b=inp.charAt(i+1);
            inp.setCharAt(i,b);
            inp.setCharAt(i+1,a);
        }
        System.out.println(inp);
    }
}
