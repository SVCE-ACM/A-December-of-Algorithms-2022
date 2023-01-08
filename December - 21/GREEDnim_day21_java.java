package acm;

import java.util.Scanner;

public class GREEDnim_day21_java {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int disks=in.nextInt();
        towerOfHanoi("tower 1","tower 2","tower 3",disks);
    }
    public static void towerOfHanoi(String left,String middle,String right , int diskNo )
    {
        if(diskNo==1)
        {
            System.out.println("move disk "+diskNo+" from "+left+" to "+ right);
            return;
        }

        towerOfHanoi(left,right,middle,diskNo-1);
        System.out.println("move disk "+diskNo+" from "+left+" to "+ right);
        towerOfHanoi(middle,left,right,diskNo-1);






    }


}


