import java.io.*;
public class Java_souvikpal2000{
	public static void main(String args[]) throws IOException{
		InputStreamReader isr=new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(isr);

		System.out.println("Input : ");
		int n = Integer.parseInt(br.readLine());

		String[] hexStrArray = new String[n];
		String[] actualStrArray = new String[n];
		int i = 0;
		while(i<n){
			String hexStr = br.readLine();
			int length = hexStr.length();
			if(length%2 != 0){
				System.out.println("Hexadecimal String is Invalid!! Enter Again...");
				continue;
			}

			StringBuffer sb=new StringBuffer("");
			for(int j=0;j<length;j=j+2){
				String subString = hexStr.substring(j,j+2);
				sb.append((char) Integer.parseInt(subString, 16));
			}
			actualStrArray[i] = sb.toString();
			i++;
		}

		System.out.println("");
		System.out.println("Output : ");
		for(int j=0;j<n;j++){
			System.out.println(actualStrArray[j]);
		}
	}
}