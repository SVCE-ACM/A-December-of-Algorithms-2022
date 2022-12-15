import java.io.*;
public class Java_souvikpal2000{
	public static void main(String args[]) throws IOException{
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(isr);

		System.out.println("Input : ");
		System.out.print("fuel_price=");
		int fuel_price = Integer.parseInt(br.readLine());

		int expenditure = 0;
		int fixedFuelPrice = fuel_price;
		for(int day=1; day<=31; day++){
			if(day%3 == 0 && day%5 == 0){
				fuel_price = fuel_price + 3 - 2;
			}
			else if(day%3 == 0){
				fuel_price = fuel_price + 3;
			}
			else if(day%5 == 0){
				fuel_price = fuel_price - 2;
			}
			else{
				fuel_price = fixedFuelPrice;
			}
			expenditure = expenditure + (fuel_price * 2);
		}
		expenditure = expenditure - 4;

		int percent = (50000 * 10)/100;
		String msg = "";
		if(expenditure > percent){
			msg = "EXPENDITURE EXCEEDING LIMIT";
		}else{
			msg = "EXPENDITURE WITHIN LIMIT";
		}

		System.out.println("");
		System.out.println("Output : ");
		System.out.println("Expenditure="+expenditure);
		System.out.println("");
		System.out.println(msg);

	}
}