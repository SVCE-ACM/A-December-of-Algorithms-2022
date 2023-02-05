/*
 * Kochouseph Chittilappilly went to Dhruv Zplanet
 *  , a gaming space, with his friends and played a game called “Guess the Word”.

Rules of the game are –

Computer displays some strings on the screen and the player should pick one string /
 word if this word matches with the random word that the computer picks then the player is declared as Winner.

Kochouseph Chittilappilly’s friends played the game and no one won the game. 

This is Kochouseph Chittilappilly’s turn to play and he decided to win the game.
 What he observed from his friend’s game is that the computer is picking up the first string whose 
 length is odd and is of maximum length.

Due to system failures computers sometimes cannot generate odd length words.
 In such cases you will lose the game irrespective of whether you guess the right word or not 
 and it displays “better luck next time”.

Write a program to help Kochouseph win the game
 */

 /*
  Input:
3
Go to hell

Output :
Better luck next time




Input:
5
Hello Good Morning Welcome You

Output :
Morning

  */
import java.util.*;
public class JAVA_GANESHANHARI_DAY_9{
    public static void main(String[] args) {
        
        try (Scanner s = new Scanner(System.in)) {
            int n=s.nextInt();
            String str1[]=new String[n];
            int arr[]=new int[n];
            int i=0;
            while(i<n)
            {
            str1[i]=s.next();
            arr[i]=str1[i].length();
            if(arr[i]%2==0)
            arr[i]=0;
            i++;
            }
            int temp=arr[0];
            int count=-1;
            for(int j=1;j<n;j++)
            {
                if(arr[j]>temp)
                {
                    temp=arr[j];
                    count=j;
                }
                
            }
            if(count==-1)
            System.out.println("BETTER LUCK NEXT TIME");
            else
            System.out.println(str1[count]);
        }
}
}