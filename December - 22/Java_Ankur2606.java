import java.util.*;
public class Java_Ankur2606{
	public String theMarkowitzParadox(String codeword, String message){
		String encrypt = "";
		int length = message.length();
		int l = codeword.length();
		int j = 0;
		for(int i=0;i<length;i++){
			if(j==l){
				j=0;
			}
			char characterCode = codeword.charAt(j);
			int shift = Math.abs((char)'A' - (char)characterCode);
			char characterMsg = message.charAt(i);
			int sum = (int)characterMsg + shift;
			if(sum > 90){
				int diff = sum - 90;
				encrypt = encrypt + (char)(64 + diff);

			}else{
				encrypt = encrypt + (char)sum;
			}
			j++;
		}
		return encrypt;
	}
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		String codeword = sc.next();
		String message = sc.next();

		Java_Ankur2606 ob=new Java_Ankur2606();
		String encrypt = ob.theMarkowitzParadox(codeword.toUpperCase(),message.toUpperCase());

		System.out.println("");
		System.out.println("Output:");
		System.out.println("");
		System.out.println(encrypt);
	}
}