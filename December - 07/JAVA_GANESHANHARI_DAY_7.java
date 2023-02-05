/*You are given a grid made up of random characters.
 Given a word, your task is to determine whether the word can be constructed from the given grid.

The word can be constructed from letters of sequentially adjacent cells, 
where adjacent cells are horizontally or vertically neighboring. 
The same letter cell may not be used more than once */


/*
  Input:
  COMMUNICATION

Output:
  Found
  


   Input:
    DOCUMENT

Output:
  Not Found
  
 */

import java.util.*;
public class JAVA_GANESHANHARI_DAY_7
{
    public static int n;
    public static char word[]=new char[n];
    public static char a[][]=new char[15][15];
    public static int xa[]={0,0,1,-1};
    public static int ya[]={1,-1,0,0};
    public static int i,j;
    public static int xpos,ypos;
    public static boolean find(int x,int y)
    {

        for(j=0;j<4;j++)
        {
            xpos=x;
            ypos=y;
            for( i=1;i<n;i++)
            {
                    
                    xpos+=xa[j];
                    ypos+=ya[j];
                    if(xpos<0||xpos>14|| ypos<0||ypos>14 ) break;
                    if(word[i]!=a[xpos][ypos]) break;
            }
            if(i==n) return true;
        }
        
        return false;

    }

public static void main(String[] args) 
    {
                    
        Scanner s=new Scanner(System.in);
        System.out.println("Input:");
        String word1=s.next();
        word=word1.toCharArray();
        n=word.length;
        String a1="ASSERTIVENESSLJCFOGOODPOSITIVEOPENBMUREWOPRPSMEDIATIONELDIOGMAASREGJEWINWINUCIAEMOEECSKENINEMRSHACDVTWTTLITEHOTLTSTERAOECASPLGLSIUNERFEAISAUSYTPOISEVFTTARTTDOCENPPIHIOGAIGUPYMGOOEEOGEPOAFPQIENOWANECONFLICTSDCERFNHTCATNOCEYEBT";
        int index=0;
        for(int i=0;i<15;i++)
        {
            for(int j=0;j<15;j++) 
            {
                a[i][j]=a1.charAt(index++);
               // System.out.print(a[i][j]+"\t");
            }
            //System.out.println();
        }
        for(int i=0;i<15;i++)
            {
                for(int j=0;j<15;j++)
                    {
                    if(word[0]==a[i][j])
                    {
                        if(find(i,j)!=true) continue;
                        else 
                        {
                            System.out.println("OUTPUT:\nFound");
                            System.exit(0);
                        }
                    }
                    else continue;
                    }
            }
            System.out.println("OUTPUT:\n NOT FOUND");
                    
    }
}