import java.util.Scanner;
public class Java_tarpandas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("fuel_price=");
        int fuelPrice = sc.nextInt();
        int tempFuelPrice = fuelPrice;

        // price increased by 3 every 3 days, so 10 times in 31 days
        // price decreased by 2 every 5 days, so 6 times in 31 days

        int extraCostPerMonth = 0;

        for(int i=1; i<=31; i++) {
            if(i%3 == 0) {
                tempFuelPrice += 3;
            }
            if(i%5 == 0) {
                tempFuelPrice -= 2;
            }
            extraCostPerMonth += tempFuelPrice;
            tempFuelPrice = fuelPrice;
        }
        int totalCost = extraCostPerMonth * 2;

        System.out.println("Expenditure="+totalCost);

        if(totalCost <= 5000) {
            System.out.println("\"EXPENDITURE WITHIN LIMIT\"");
        } else {
            System.out.println("\"EXPENDITURE EXCEEDING LIMIT\"");
        }
        sc.close();
    }
}
