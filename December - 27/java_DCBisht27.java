import java.util.*;

import java.text.DecimalFormat;
public class java_DCBisht27 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String word=sc.nextLine();
        String[] arrayOfWord=word.split("/",0);
        int x=0,y=0;
        boolean f=true;
        try {
            x=Integer.parseInt(arrayOfWord[0]);
            
        }
        catch(NumberFormatException e){
            System.out.println("Error");
            f=false;
        }
        try {
            y=Integer.parseInt(arrayOfWord[1]);
        }
        catch(NumberFormatException e){
            System.out.println("Error");
            f=false;
        }



        if(x>y || y==0){
            System.out.println("Error");
            f=false;
        }
        if(f){
        float a,b;
        a=x;
        b=y;
        float ans=30000f;
        float z=0.000f;
        z=(a/b)*100;
        DecimalFormat df = new DecimalFormat();
        df.setMaximumFractionDigits(3);
        DecimalFormat df1 = new DecimalFormat();
        df1.setMaximumFractionDigits(1);
        // System.out.println(x+" "+y);
        ans=(ans*z/100);
        
            System.out.println("Fuel calibration: "+df.format(z)+"%");
            System.out.println("Amount of fuel in tank: "+df1.format(ans)+" L out of 30,000 L");
            if(ans<300){
                System.out.println("The tank is EMPTY!!!");
                System.out.println("Refill tank.");
            }
            else if(ans>29700){
                System.out.println("The tank is FULL!");
            }
        }
        sc.close();
    }
}
