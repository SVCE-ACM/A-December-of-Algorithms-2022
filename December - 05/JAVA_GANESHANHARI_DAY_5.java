/*

DAY 5
MASON is a motoring enthusiast and he owns a sports bike . 
With the price of petrol going up and down in a pattern , MASON is worried whether his salary would be sufficient to meet his needs apart from fueling his bike .
 So he decides to calculate how much he spends on fueling his bike per month. 
 Help MASON calculate his fuel expenditure. 
 If he spends more than 10 PERCENTAGE of his INCOME give him a warning message reading b EXPENDITURE EXCEEDING LIMIT
Conditions
MASON fuels his bike twice a day .

The PRICE of the fuel is x/l initially.

Every third day the price goes up by 3 rupees .

Every fifth day the price goes down by 2 rupees .

On the other days the price of the fuel remains x/l.

Help him to calculate his expense for a period of one month (31DAYS) .

Check whether the expenditure is more than 10 percent of his income .

His income is 50,000 rupees per month.
*/  

/* 
Input:
75

Output:
4686

“EXPENDITURE WITHIN LIMIT”

  */
import java.util.Scanner;

public class JAVA_GANESHANHARI_DAY_5
{
  
public static void main (String[]args)
  {
    
try (Scanner s = new Scanner (System.in)) {
	System.out.println ("Input:");
	    
	int fuel = s.nextInt ();
	    
	int exp = 0;
	    
	for (int i = 1; i <= 31; i++)
	      
	      {
		
	if ((i % 3 == 0) && (i % 5 == 0))
		  
	exp += ((fuel + 1) * 2);
		
		else if (i % 3 == 0)
		  
	exp += ((fuel + 3) * 2);
		
		else if (i % 5 == 0)
		  
	exp += ((fuel - 2) * 2);
		
		else
		  
	exp += (fuel * 2);
	      
	 
	}
	    
	System.out.println (exp);
	    
	if (exp < 5000)
	      
	System.out.println ("EXPENDITURE WITHIN LIMIT");
	    
	else
	      
	System.out.println ("EXPENDITURE EXCEEDING LIMIT");
}
  
}

 
 
}


 
 
 
