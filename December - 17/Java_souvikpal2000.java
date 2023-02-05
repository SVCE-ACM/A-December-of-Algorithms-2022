import java.util.*;
public class Java_souvikpal2000{
	public List<char[]> zigzagConversion(String str, int row){
		int length = str.length();
		char[] characters;
		List<char[]> list=new ArrayList<>();
		int j=0;
		int c = row - 2;
		while(j<length){
			characters = new char[row];
			for(int i=0;i<row;i++){
				characters[i] = str.charAt(j);
				j++;
				if(j==length){
					break;
				}
			}
			list.add(characters);

			int k = c;
			while(k>=1){
				characters = new char[row];
				if(j==length){
					break;
				}
				for(int i=0;i<row;i++){
					if(i == k){
						characters[i] = str.charAt(j);
					}else{
						characters[i] = ' ';
					}
				}
				list.add(characters);
				k--;
				j++;
			}
		}
		return list;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		System.out.println("");
		System.out.print("Str = ");
		String str = sc.next();
		System.out.print("Row = ");
		int row = sc.nextInt();

		Java_souvikpal2000 ob=new Java_souvikpal2000();
		List<char[]> output = ob.zigzagConversion(str,row);

		System.out.println("");
		System.out.println("Output:");
		for(int i=0;i<row;i++){
			for(char[] characters : output){
				if(characters[i] != ' '){
					System.out.print(characters[i]);
				}
			}
		}
		
	}
}