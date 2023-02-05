import java.util.*;
public class Java_tarpandas{
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

		String codeword = sc.next();
		String message = sc.next();

		Java_tarpandas ob=new Java_tarpandas();
		String encrypt = ob.theMarkowitzParadox(codeword.toUpperCase(),message.toUpperCase());

		System.out.println("");
		System.out.println(encrypt);

        sc.close();
	}
}