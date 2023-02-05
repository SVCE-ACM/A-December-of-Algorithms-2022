import java.util.*;
public class Java_tarpandas{
	public void move(int n, String left, String right, String middle){
		if(n == 1){
			System.out.println("Move disk "+n+" from tower "+left+" to tower "+right);
		}
		else{
			move(n-1,left,middle,right);
			System.out.println("Move disk "+n+" from tower "+left+" to tower "+right);
			move(n-1,middle,right,left);
		}
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.print("Number of discs: ");
		int n = sc.nextInt();

		Java_tarpandas ob=new Java_tarpandas();

		System.out.println("");
		System.out.println("");
		System.out.println("The sequence of moves :");
		ob.move(n,"I","III","II");
        sc.close();
    }
}