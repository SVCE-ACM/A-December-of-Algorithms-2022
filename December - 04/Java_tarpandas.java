import java.util.Scanner;
public class Java_tarpandas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("No. of Days:");
        int noOfDays = sc.nextInt();

        int sMarktChangeValues[] = new int[noOfDays];

        System.out.print("Given stock market change values: ");
        for(int i=0; i<noOfDays;i++) {
            sMarktChangeValues[i] = sc.nextInt();
        }

        // Calculations
        int n = sMarktChangeValues.length;
        int count, max = sMarktChangeValues[0], startDayToSell = 0, endDayToSell = 1;
        for(int i=0;i<n;i++){
            count = sMarktChangeValues[i];
            for(int j=i+1; j<n;j++){
                count+= sMarktChangeValues[j];
                if(count > max) {
                    startDayToSell = i+1;
                    endDayToSell = j+1;
                    max = count;
                }
            }
        }

        // Display outputs
        System.out.println("Profit Vlue: "+max);
        System.out.println("Proposed days to sell: Day: "+startDayToSell+" to "+" Day: "+endDayToSell);
        System.out.print("Stock market Change Values: {");
        for(int i=startDayToSell -1; i<endDayToSell-1; i++) {
            System.out.print(sMarktChangeValues[i]+", ");
        }
        System.out.println(sMarktChangeValues[endDayToSell-1]+"}");

        sc.close();
    }
}
