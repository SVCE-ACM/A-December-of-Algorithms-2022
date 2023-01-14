import java.util.*;
class Java_Ankur2606{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input: ");
		System.out.print("n=");
		int n = sc.nextInt();
		int[] arr = new int[n];
		System.out.print("Set of numbers: ");
		for(int i=0;i<n;i++){
			arr[i] = sc.nextInt();
		}
		int p;
		while(true){
			System.out.print("Position=");
			p = sc.nextInt();
			if(p-1 > n || p-1 < 0){
				System.out.println("Invalid Position!! Enter again...");
				continue;
			}
			break;
		}
		System.out.print("Player going first: ");
		String player = sc.next();

		int flag = 0;
		while(true){
			player = player.equalsIgnoreCase("Tanika")? "Bob" : "Tanika";

			flag = arr[p-1];
			arr[p-1] = arr[0] - 1;
			arr[0] = flag;

			if(arr[0] == 0){
				break;
			}	
		}

		System.out.println("");
		System.out.println("Output: ");
		System.out.println((player.equalsIgnoreCase("Tanika")? "Bob" : "Tanika") + " wins the game!");
		System.out.println(player + " loses the game!");
	}
}