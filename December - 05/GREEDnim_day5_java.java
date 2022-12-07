package acm;

import java.util.Scanner;

public class GREEDnim_day5_java {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.print("enter fuel_prize :");
        int income=50000;

        int fuelPrize=in.nextInt();
        int x=fuelPrize;
        double amountSpent=0;
        for(int i=1;i<32;i++)
        {

            if(i%3==0 || i%5==0)
            {
                if(i%3==0 ) fuelPrize+=3;
                if(i%5==0) fuelPrize-=2;
            }
            else fuelPrize=x;

            amountSpent+=(fuelPrize*2);

        }
        double tenPercentOfIncome= (10.0/100.0)*income;
        System.out.println(" EXPENSE = "+amountSpent );
        if(amountSpent>tenPercentOfIncome) System.out.println("EXPENDITURE EXCEEDING LIMIT");
        else System.out.println("EXPENDITURE WITHIN LIMIT");

    }
}
