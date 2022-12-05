package acm;

import java.util.Scanner;

public class GREEDnim_day5_java {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.print("IF INCOME :");
        int income=in.nextInt();

        int fuelPrize=75;
        double amountSpent=0;
        for(int i=1;i<32;i++)
        {

            if(i%3==0) fuelPrize+=3;
            if(i%5==0) fuelPrize-=2;

            amountSpent+=(fuelPrize*2);

        }
        double tenPercentOfIncome= (10.0/100.0)*income;
        System.out.println("If EXPENSE = "+amountSpent +" "+tenPercentOfIncome);
        if(amountSpent>tenPercentOfIncome) System.out.println("EXPENDITURE EXCEEDING LIMIT");
        else System.out.println("EXPENDITURE WITHIN LIMIT");

    }
}
