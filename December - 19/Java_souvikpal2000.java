import java.util.*;
class AlphabetDetail{
	char alphabet;
	int count;
	AlphabetDetail(char alphabet, int count){
		this.alphabet = alphabet;
		this.count = count;
	}
}
class Java_souvikpal2000{
	public String removeSpecialCharacters(String str){
		String newStr = "";
		for(int i=0;i<str.length();i++){
			char c = str.charAt(i);
			if(Character.isLetter(c) || Character.isWhitespace(c)){
				newStr = newStr + c;
			}
		}
		return newStr;
	}

	public List<AlphabetDetail> alphabetCount(String str){
		str = str.toLowerCase();
		int length = str.length();
		List<AlphabetDetail> list = new ArrayList<>();
		for(int i=97;i<=122;i++){
			int count=0;
			for(int j=0;j<length;j++){
				if((char)i == str.charAt(j)){
					count++;
				}
			}
			if(count>0){
				list.add(new AlphabetDetail((char)i,count));
			}
		}
		return list;
	}

	public List<AlphabetDetail> makingDummyObjectList(List<AlphabetDetail> list){
		List<AlphabetDetail> dummy = new ArrayList<>();
		for(AlphabetDetail l : list){
			dummy.add(new AlphabetDetail(l.alphabet, l.count));
		}
		return dummy;
	}

	public String findAnagram(String str, List<AlphabetDetail> list, List<AlphabetDetail> dummy){
		String anagram = "";
		String flag = ""; 
		str = str.toLowerCase() + ' ';
		int length = str.length();
		int i = 0;
		boolean alphabetCountChanged = false;
		while(i<length){
			char c = str.charAt(i);
			if(c == ' '){
				anagram = anagram + flag;
				flag = "";

				int k=0;
				for(AlphabetDetail l : list){
					if(l.count == 0){
						k++;
					}
				}
				if(k == list.size()){
					break;
				}

			}
			else{
				boolean jumpToNextString = false;
				boolean characterAvailable = false;
				for(AlphabetDetail l : list){
					if(c == l.alphabet){
						characterAvailable = true;
						l.count = l.count - 1;
						alphabetCountChanged = true;
						flag = flag + c;
						break;
					}
				}
				if(characterAvailable == false){
					anagram = "";
					for(int j=i;j<length;j++){
						if(str.charAt(j) == ' '){
							jumpToNextString = true;
							i = j + 1;
							break;
						}
					}
				}
				if(jumpToNextString == true){
					if(alphabetCountChanged == true){
						//Reset Original (list) using (dummy)
						for(int j=0;j<dummy.size();j++){
							AlphabetDetail dummyData = dummy.get(j);
							list.set(j, new AlphabetDetail(dummyData.alphabet, dummyData.count));
						}
						alphabetCountChanged = false;
					}
					continue;
				} 
			}
			i++;			
		}
		
		return anagram;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		System.out.println("");
		System.out.println("String 1:");
		String str1 = sc.nextLine();
		System.out.println("");
		System.out.println("String 2:");
		String str2 = sc.nextLine();

		Java_souvikpal2000 ob=new Java_souvikpal2000();
		str1 = ob.removeSpecialCharacters(str1);
		str2 = ob.removeSpecialCharacters(str2);
		List<AlphabetDetail> list = ob.alphabetCount(str2);
		List<AlphabetDetail> dummy = ob.makingDummyObjectList(list);
		String anagram = ob.findAnagram(str1,list,dummy);

		System.out.println("");
		System.out.println("Output:");
		System.out.println("");
		System.out.println(anagram.length() == 0? "No Anagram" : anagram);
	}
}