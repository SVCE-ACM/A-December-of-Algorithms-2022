import java.util.*;
class InvalidNumerator extends Exception{  
    public InvalidNumerator(String str){   
        super(str);  
    }
}
class InvalidDenominator extends Exception{
	public InvalidDenominator(String str){
		super(str);
	}
}
class Java_souvikpal2000{
	public float calculateFuelCalibration(int x, int y){
		float percentage = ((float)x*100)/(float)y;
		return percentage;
	}

	public String calculateLeftFuel(int x, int y, float totalFuel){
		float leftFuel = ((float)x * totalFuel)/(float)y;
		return String.format("%.1f",leftFuel);
	}

	public String checkTank(float result){
		String msg = "";
		if(result <= 1){
			msg = "warning";
		}
		if(result >= 99){
			msg = "ok";
		}
		return msg;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		System.out.println("");
		int x,y;
		while(true){
			System.out.println("Enter the Hydrogen fuel fraction:");
			String fraction = sc.next();

			String[] xy = fraction.split("/");
			try{
				x = Integer.parseInt(xy[0]);
				y = Integer.parseInt(xy[1]);
				if(y == 0){
					throw new InvalidDenominator("Y must not be Zero");
				}
				if(x > y){
					throw new InvalidNumerator("X must be less than Y");
				}
				break;
			}  
			catch(NumberFormatException e){
				System.out.println("X & Y must be Integer");
			}
			catch(InvalidDenominator e){
				System.out.println(e);
			}
			catch(InvalidNumerator e){
				System.out.println(e);
			}
			System.out.println("");
		}

		float totalFuel = 30000f;
		Java_souvikpal2000 ob=new Java_souvikpal2000();
		float result = ob.calculateFuelCalibration(x,y);
		String leftFuel = ob.calculateLeftFuel(x,y,totalFuel);
		String flag = ob.checkTank(result);

		System.out.println("");
		System.out.println("Output:");
		System.out.println("");
		System.out.println("Fuel calibration: "+String.format("%.3f",result)+"%");
		System.out.println("Amount of fuel in tank: "+leftFuel+" L out of "+totalFuel+" L");

		if(flag.equals("ok")){
			System.out.println("The tank is FULL!");
		}else if(flag.equals("warning")){
			System.out.println("The tank is EMPTY!!!");
			System.out.println("Refill tank");
		}
	}
}