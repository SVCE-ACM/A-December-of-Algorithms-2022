/*
 A list is provided with a sequence of characters . The character ‘_’ represents land and the character ‘~’ represents water. A monkey can move 1 step or 2 steps in a single jump. Another list provided here contains the step that the monkey took Eg[1,1,2,1,2]. Whenever the monkey touches the water. The game is over and the score must be returned. Calculate the jumps the monkey took before touching the water.
 */

 /*Input 1:

[‘_’,’~’,’_’,’_’,’_’,’_’,’~’,’_’,’_’,’~’,’_’,’~’]

[2,1,1,1,2,1,2,1]

Output 1:

Score =7

Input 2:

[‘_’,’~’,’_’,’~’,’_’,’_’,’~’,’_’,’_’,’~’,’_’,’~’]

[2,2,1,1,1,1,2,1,1]

Output 2: 
Score =3
 */

import java.util.*;
public class DAY_11
{
    public static void main(String[] args) {
        try (Scanner s = new Scanner(System.in)) {
            String path=s.next();
            int n=path.length();
            String jump=s.next();
      // int n1=jump.length();
            int pos=0;
            int score=0;
            for(int i=0;i<n;i++)
            {
                
                try{
                pos+=jump.charAt(i)-'0';
                if(path.charAt(pos)=='~')
                {
                   System.out.println(score); 
                   System.exit(0);
                }
                else{
                    score++;
                }
                }
                 catch(Exception e)
                {
                    System.out.println(score); 
                    System.exit(0);
                }
            }
        }

    }
}