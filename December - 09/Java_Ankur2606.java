import java.util.*;
public class Java_Ankur2606{
	public String guessTheWord(String[] arr, int n){
		int maxLength = 0;
		String str = "";
		for(int i=0;i<n;i++){
			int length = arr[i].length();
			if(length%2!=0 && length>maxLength){
				maxLength = length;
				str = arr[i];
			}
		}
		return str;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		int n = sc.nextInt();
		String[] arr = new String[n];
		for(int i=0;i<n;i++){
			arr[i] = sc.next();
		}

		Java_Ankur2606 ob=new Java_Ankur2606();
		String str = ob.guessTheWord(arr,n);

		System.out.println("");
		System.out.println("Output : ");
		if(str.length() == 0){
			System.out.println("Better luck next time");
		}else{
			System.out.println(str);
		}
	}
}