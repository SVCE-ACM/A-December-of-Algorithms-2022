import java.util.*;

    
class java_DCBisht01{
    public static void main(String[] args) {
        // Assuming the input format as follows
        // first line : no of words
        // for the next n lines , space seperates hexadecimal values as a string
        // eg
        //  1st line : 2
        //  2nd line :49 6E 76 61 64 65
        //  3rd line :4D 69 6C 69 74 61 72 79
        Scanner in=new Scanner(System.in);
        
        int noOfWords=0;
        noOfWords=Integer.parseInt(in.nextLine());

        for(int i=0;i<noOfWords;i++)
        {
            StringBuilder ans= new StringBuilder();
            String word=in.nextLine();
            String[] arrayOfWord=word.split(" ",0);
            for(String hex:arrayOfWord)
            {
                int decimal=Integer.parseInt(hex,16);
                ans.append((char) decimal);
            }
            System.out.println(ans);

        }
        
        in.close();


    }
}
    