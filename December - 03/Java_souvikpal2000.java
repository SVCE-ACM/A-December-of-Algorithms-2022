import java.io.*;
import java.util.*;
public class Java_souvikpal2000{
	public String[][] convertDashToZero(String[][] arr, int n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(arr[i][j].equals("-")){
					arr[i][j] = "0";
				}
			}
		}
		return arr;
	}

	public String[][] minesweeper(String[][] arr, int n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(arr[i][j].equals("#")){
					int xPos = i;
					int yPos = j;
					int verUp = xPos - 1;
					int verDown = xPos + 1;
					int horLeft = yPos - 1;
					int horRight = yPos + 1;

					if(verUp >= 0 && arr[verUp][j].equals("#") == false){
						arr[verUp][j] = Integer.toString(Integer.parseInt(arr[verUp][j]) + 1);
					}
					if(verDown <= (n-1) && arr[verDown][j].equals("#") == false){
						arr[verDown][j] = Integer.toString(Integer.parseInt(arr[verDown][j]) + 1);
					}
					if(horLeft >= 0 && arr[i][horLeft].equals("#") == false){
						arr[i][horLeft] = Integer.toString(Integer.parseInt(arr[i][horLeft]) + 1);
					}
					if(horRight <= (n-1) && arr[i][horRight].equals("#") == false){
						arr[i][horRight] = Integer.toString(Integer.parseInt(arr[i][horRight]) + 1);
					}

					if(horLeft >= 0 && verUp >= 0 && arr[verUp][horLeft].equals("#") == false){
						arr[verUp][horLeft] = Integer.toString(Integer.parseInt(arr[verUp][horLeft]) + 1);
					}
					if(horLeft >= 0 && verDown <= (n-1) && arr[verDown][horLeft].equals("#") == false){
						arr[verDown][horLeft] = Integer.toString(Integer.parseInt(arr[verDown][horLeft]) + 1);
					}
					if(horRight <= (n-1) && verUp >= 0 && arr[verUp][horRight].equals("#") == false){
						arr[verUp][horRight] = Integer.toString(Integer.parseInt(arr[verUp][horRight]) + 1);
					}
					if(horRight <= (n-1) && verDown <= (n-1) && arr[verDown][horRight].equals("#") == false){
						arr[verDown][horRight] = Integer.toString(Integer.parseInt(arr[verDown][horRight]) + 1);
					}
				}
			}
		}

		return arr;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input : ");
		int n = sc.nextInt();
		String[][] arr = new String[n][n];
		for(int i=0;i<n;i=i+1){
			for(int j=0;j<n;j++){
				arr[i][j] = sc.next();
			}
		}

		// String[][] arr = {
		// 	{"-", "#", "-", "-", "#"},
		// 	{"-", "-", "-", "-", "-"},
		// 	{"-", "-", "#", "-", "-"},
		// 	{"-", "#", "-", "-", "#"},
		// 	{"-", "#", "-", "-", "#"}
		// };
		
		Java_souvikpal2000 ob=new Java_souvikpal2000();
		String[][] updatedArray = ob.convertDashToZero(arr,n);
		String[][] mine = ob.minesweeper(updatedArray,n);

		System.out.println("");
		System.out.println("Output : ");
		for(int i=0;i<n;i=i+1){
			for(int j=0;j<n;j++){
				System.out.print(mine[i][j]+"\t");
			}	
			System.out.println("");
		}
	}
}