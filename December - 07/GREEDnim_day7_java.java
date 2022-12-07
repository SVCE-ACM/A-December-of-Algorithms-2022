package acm;

import java.util.Scanner;

public class GREEDnim_day7_java {

    static char[][] grid;
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
         grid=new char[15][15];
        String a="ASSERTIVENESSLJCFOGOODPOSITIVEOPENBMUREW0PRPSMEDIATIONELDIOGMAASREGJEWINWINUCIAEMOEECSKENINEMRSHACDVTWTTLITEHOTLTSTERAOECASPLGLSIUNERFEAISAUSYTPOISEVFTTARTTDOCENPPIHIOGAIGUPYMGOOEEOGEPOAFPQIENOWANECONFLICTSDCERFNHTCATNOCEYEBT";
//        System.out.println(a.length());
        int index=0;
        for(int i=0;i<15;i++)
        {
            for(int j=0;j<15;j++)
            {
                grid[i][j]=a.charAt(index++);
//                System.out.print(grid[i][j]);
            }
//            System.out.println();
        }
        String inp=in.next();
        boolean done=false;
        for(int i=0;i<15;i++)
        {
            for(int j=0;j<15;j++)
            {
                if(grid[i][j]==inp.charAt(0))
                {

                    done=findWord(inp,1,i+0,j+1) || findWord(inp,1,i+1,j+0);
//                    System.out.println(i+" "+j+" "+done);
                    if(done) break;
                }
            }
            if(done) break;
        }
        if(done) System.out.println("FOUND");
        else System.out.println("NOT FOUND");

    }
    public static boolean findWord(String s,int index,int row,int col)
    {
        if(index==s.length()) return true;
        char c=s.charAt(index);
        if( row>=15 || col>=15 || c!=grid[row][col]) return false;
        return findWord(s,index+1,row+1,col) || findWord(s,index+1,row,col+1);
    }
}
