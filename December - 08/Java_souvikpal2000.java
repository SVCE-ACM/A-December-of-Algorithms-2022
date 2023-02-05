import java.util.*;
public class Java_souvikpal2000{
	public StringBuilder aptitudeCheck(String str){
		StringBuilder result=new StringBuilder();
		StringBuilder sb=new StringBuilder();
		int length = str.length();
		for(int i=0;i<length;i++){
			char c = str.charAt(i);
			sb.append(c);
			if(sb.length() == 2){
				result.append(sb.charAt(1));
				result.append(sb.charAt(0));
				sb.setLength(0);
			}
		}
		if(length%2 != 0){
			result.append(str.charAt(length-1));
		}
		return result;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.print("Input: ");
		String str = sc.next();

		Java_souvikpal2000 ob=new Java_souvikpal2000();
		StringBuilder output = ob.aptitudeCheck(str);

		System.out.println("Output: " + output);
	}
}