import java.util.*;
class Coordinates{
	int xPos;
	int yPos;
	Coordinates(int xPos, int yPos){
		this.xPos = xPos;
		this.yPos = yPos;
	}
}
public class Java_souvikpal2000{
	public Coordinates[] searchForString(int row, int column, char[][] map, String str){
		int[] rowDirection = {1,-1,0,0};
		int[] columnDirection = {0,0,1,-1};
		Coordinates starting = new Coordinates(row,column);
		Coordinates[] coordinateDetails = new Coordinates[2];
		int count = 1;
		for(int i=0;i<rowDirection.length;i++){
			int rowPos = row;
			int colPos = column;
			for(int j=1;j<str.length();j++){
				char c = str.charAt(j);
				rowPos = rowPos + rowDirection[i];
				colPos = colPos + columnDirection[i];
				if(rowPos<0 || colPos<0 || rowPos>(map.length-1) || colPos>(map[0].length-1) || map[rowPos][colPos] != c){
					break;
				}
				if(map[rowPos][colPos] == c){
					count++;
				}
				if(count == str.length()){
					Coordinates ending = new Coordinates(rowPos,colPos);
					coordinateDetails[0] = starting;
					coordinateDetails[1] = ending;
					return coordinateDetails;
				}
			}
		}
		return null;
	}

	public Coordinates[] wordMap(char[][] map, String str){
		int rowSize = map.length;
		int columnSize = map[0].length;
		for(int i=0;i<rowSize;i++){
			for(int j=0;j<columnSize;j++){
				char c = str.charAt(0);
				if(map[i][j] == c){
					int row = i;
					int column = j;
					Coordinates[] coordinates = searchForString(row,column,map,str);
					if(coordinates != null){
						return coordinates;
					}
				}
			}
		}
		return null;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		String str = sc.next();

		char[][] map = {
            {'A','S','S','E','R','T','I','V','E','N','E','S','S','L','J'},
            {'C','F','O','G','O','O','D','P','O','S','I','T','I','V','E'},
            {'O','P','E','N','B','M','U','R','E','W','O','P','R','P','S'},
            {'M','E','D','I','A','T','I','O','N','E','L','D','I','O','G'},
            {'M','A','A','S','R','E','G','J','E','W','I','N','W','I','N'},
            {'U','C','I','A','E','M','O','E','E','C','S','K','E','N','I'},
            {'N','E','M','R','S','H','A','C','D','V','T','W','T','T','L'},
            {'I','T','E','H','O','T','L','T','S','T','E','R','A','O','E'},
            {'C','A','S','P','L','G','L','S','I','U','N','E','R','F','E'},
            {'A','I','S','A','U','S','Y','T','P','O','I','S','E','V','F'},
            {'T','T','A','R','T','T','D','O','C','E','N','P','P','I','H'},
            {'I','O','G','A','I','G','U','P','Y','M','G','O','O','E','E'},
            {'O','G','E','P','O','A','F','P','Q','I','E','N','O','W','A'},
            {'N','E','C','O','N','F','L','I','C','T','S','D','C','E','R'},
            {'F','N','H','T','C','A','T','N','O','C','E','T','E','B','T'}
        };

		Java_souvikpal2000 ob=new Java_souvikpal2000();
		Coordinates[] flag = ob.wordMap(map,str.toUpperCase());

		System.out.println("");
		System.out.println("Output:");
		if(flag != null){
			System.out.println("Found");
			System.out.println("From ("+(flag[0].xPos+1)+","+(flag[0].yPos+1)+") to ("+(flag[1].xPos+1)+","+(flag[1].yPos+1)+")");
		}else{
			System.out.println("Not Found");
		}
	}
}