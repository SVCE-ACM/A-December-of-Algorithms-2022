import java.util.*;
public class Java_souvikpal2000{
	public String[] playWithWords(String[] arr, int n){
		String[] results = new String[n];
		for(int i=0;i<n;i++){
			String str = arr[i].toLowerCase();
			int length = str.length();
			int consonants = 0;
			for(int j=0;j<length;j++){
				char c = str.charAt(j);
				if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
					consonants=0;
				}else{
					consonants++;
					if(consonants >= 4){
						break;
					}
				}
			}
			
			if(consonants >= 4){
				results[i] = "NO";
			}else{
				results[i] = "YES";
			}
		}
		return results;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		int n = sc.nextInt();
		String[] strArr = new String[n];
		for(int i=0;i<n;i++){
			int length = sc.nextInt();
			String str=null;
			while(str == null || str.length() != length){
				str = sc.next();
			}
			strArr[i] = str;
		}

		Java_souvikpal2000 ob=new Java_souvikpal2000();
		String[] arr = ob.playWithWords(strArr,n);

		System.out.println("");
		System.out.println("Output:");
		for(int i=0;i<n;i++){
			System.out.println(arr[i]);
		}
	}
}