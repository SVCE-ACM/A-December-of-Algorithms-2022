package acm;

import java.util.Scanner;

public class GREEDnim_day7_java {

    static char[][] grid;
    static boolean[][] checker;
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String inp=in.next();
         grid=new char[15][15];
         checker=new boolean[15][15];
        String a="ASSERTIVENESSLJCFOGOODPOSITIVEOPENBMUREWOPRPSMEDIATIONELDIOGMAASREGJEWINWINUCIAEMOEECSKENINEMRSHACDVTWTTLITEHOTLTSTERAOECASPLGLSIUNERFEAISAUSYTPOISEVFTTARTTDOCENPPIHIOGAIGUPYMGOOEEOGEPOAFPQIENOWANECONFLICTSDCERFNHTCATNOCEYEBT";
        int index=0;
        for(int i=0;i<15;i++)
        {
            for(int j=0;j<15;j++) grid[i][j]=a.charAt(index++);
        }
        boolean done=false;
        for(int i=0;i<15;i++)
        {
            for(int j=0;j<15;j++)
            {
                if(grid[i][j]==inp.charAt(0))
                {
                    done=findWord(inp,0,i,j);
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
        if( row>=15 || col>=15 || row<0|| col<0 || c!=grid[row][col] || checker[row][col]) return false;
        checker[row][col]=true;
        boolean ans;
            ans=findWord(s,index+1,row+1,col)||findWord(s,index+1,row-1, col)||findWord(s,index+1,row,col+1)||findWord(s,index+1,row,col-1);
        checker[row][col]=false;
        return ans;
    }
}
//COMMUNICATION