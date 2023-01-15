import java.util.*;

public class java_DCBisht06 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Input: ");
		System.out.print("p=");
		int p=Integer.parseInt(sc.nextLine());
		
		System.out.print("Set of numbers: ");
        String array=sc.nextLine();
        
		String[] a=array.split(" ",0);
		
        int x=0;
        int[] arr = new int[a.length];
		for(String i:a){
            arr[x++]=Integer.valueOf(i);
        }
		System.out.print("Player going first: ");
		String player = sc.nextLine();

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

        sc.close();
    }
}
