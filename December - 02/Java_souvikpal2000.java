import java.io.*;
public class Java_souvikpal2000{
	public static void main(String args[]) throws IOException{
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(isr);

		System.out.println("Input : ");
		String str = br.readLine();

		int length = str.length();
		int actualWordLength = length - 2;
		String actualWord = str.substring(length-4, actualWordLength) + str.substring(0, length-4);

		System.out.println("");
		System.out.println("Output : ");
		System.out.println(actualWord);
	}
}