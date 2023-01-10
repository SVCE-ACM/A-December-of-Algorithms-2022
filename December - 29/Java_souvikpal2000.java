import java.util.*;
public class Java_souvikpal2000{
	public int[] distributeCandies(int[] ratings, int n){
		int[] candies = new int[n];
		
		// Every child must have atleast 1 candy, so distribute it
		for(int i=0;i<n;i++){
			candies[i] = 1;
		}

		// Left to Right Traversal
		for(int i=0;i<n-1;i++){
			if(ratings[i+1] > ratings[i]){
				candies[i+1] = candies[i] + 1;
			}
		}

		// Right to Left Traversal
		for(int i=n-1;i>0;i--){
			if(ratings[i-1] > ratings[i] && candies[i-1] < candies[i]+1){
				candies[i-1] = candies[i] + 1;
			}
		}

		return candies;
	}

	public int calculateMinimumCandies(int[] candies, int n){
		int sum = 0;
		for(int i=0;i<n;i++){
			sum = sum + candies[i];
		}
		return sum;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		System.out.println("");
		System.out.print("n=");
		int n = sc.nextInt();
		int[] ratings = new int[n];
		System.out.print("ratings = ");
		for(int i=0;i<n;i++){
			ratings[i] = sc.nextInt();
		}

		Java_souvikpal2000 ob=new Java_souvikpal2000();
		int[] candies = ob.distributeCandies(ratings,n);
		int sum = ob.calculateMinimumCandies(candies,n);

		System.out.println("");
		System.out.println("Output:");
		System.out.println("");
		System.out.println(sum);
	}
}