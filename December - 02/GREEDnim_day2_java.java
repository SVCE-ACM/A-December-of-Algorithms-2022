

import java.util.Scanner;

public class GREEDnim_day2_java {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String input =in.next();

        int indexOfFirstLetter=input.length()-4;
        String ans=input.substring(indexOfFirstLetter,indexOfFirstLetter+2)+input.substring(0,indexOfFirstLetter);
        System.out.println(ans);

    }
}
