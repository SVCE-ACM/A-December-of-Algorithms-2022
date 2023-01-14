import java.util.*;
public class Java_Ankur2606{
	public int monkeyJump(String land_water, String steps){
		int steps_length = steps.length();
		int i = 0;
		int j = 0;
		int score = 0;
		while(i<steps_length){
			j = j + Integer.parseInt(String.valueOf(steps.charAt(i)));
			char c = land_water.charAt(j);
			if(c == '~'){
				break;
			}else{
				score++;
			}
			i++;
		}
		return score;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		String land_water = sc.next();
		String steps = sc.next();

		Java_Ankur2606 ob=new Java_Ankur2606();
		int score = ob.monkeyJump(land_water,steps);

		System.out.println("");
		System.out.println("Output:");
		System.out.println("Score ="+score);
	}
}