import java.util.*;
public class Java_souvikpal2000{
	public String circulate(int[][] arr){
		int know[] = new int[arr.length];
		know[0] = 1; //First Person know the word
		for(int i=1;i<arr.length;i++){
			know[i] = 0; // Rest don't know the word
		}

		int count = 1;
		for(int i=0;i<arr.length;i++){
			if(know[i] == 1){
				int[] told = arr[i];
				for(int j=0;j<told.length;j++){
					int person = told[j] - 1;
					if(know[person] == 0){
						know[person] = 1;
						count++;
					}
				}
			}
		}

		String msg = count == know.length? "Spread" : "Nope";
		return msg;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		System.out.println("");

		//Sample Input 1:
		int[][] arr = {
			{2},
			{3,4},
			{2},
			{2}
		};

		//Sample Input 2:
		/*int[][] arr = {
			{2},
			{5,4,6},
			{3},
			{4},
			{5},
			{6}
		};*/

		for(int i=0;i<arr.length;i++){
			if(i==0){
				System.out.print("[");
			}
			int[] persons = arr[i];
			System.out.print("[");
			for(int j=0;j<persons.length;j++){
				System.out.print(persons[j]);
				if(j != persons.length-1){
					System.out.print(", ");
				}
			}
			System.out.print("]");
			if(i != arr.length-1){
				System.out.print(", ");
			}
			if(i == arr.length-1){
				System.out.print("]");
			}
		}
		
		System.out.println("");
		System.out.println("");
		System.out.println("Output:");
		System.out.println("");

		Java_souvikpal2000 ob=new Java_souvikpal2000();
		String msg = ob.circulate(arr);
		System.out.println(msg);
	}
}