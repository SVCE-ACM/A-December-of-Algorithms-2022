import java.io.*;
import java.util.*;
public class Java_Ankur2606{
	public static int findMax(int i, int j){
		return i>j? i : j;
	}
	
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input : ");
		System.out.println("");

		System.out.print("No. of Days : ");
		int noOfDays = sc.nextInt();

		int[] arr = new int[noOfDays];
		System.out.print("Given stock market change values : ");
		for(int i=0;i<noOfDays;i=i+1){
			arr[i] = sc.nextInt();
		}

		int maxEnding = 0;
		int res = 0;
		int start = 0;
		int end = 0;

		for(int i=0;i<noOfDays;i=i+1){
			maxEnding = findMax(maxEnding+arr[i], arr[i]);
			if(maxEnding == arr[i]){
				start = i+1;
			}
			int preRes = res;
			res = findMax(res, maxEnding);	
			if(res > preRes){
				end = i+1;
			}
		}

		System.out.println("");
		System.out.println("Output : ");
		System.out.println("");

		System.out.println("Profit Value : " + res);
		System.out.println("Proposed days to sell: Day: "+start+" to Day: "+end);
		System.out.print("Stock market Change Values: {");
		for(int i=start-1;i<=end-1;i++){
			System.out.print(arr[i]);
			if(i != (end-1)){
				System.out.print(",");
			}
		}
		System.out.print("}");
	}
}