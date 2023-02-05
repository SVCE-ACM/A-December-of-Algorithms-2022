import java.util.Scanner;

public class Java_tarpandas{

    static void numberingTheNeighbours(char[][] arr, int i, int j, int n) {

        // Checking horizontal and vertical elements not out of bounds

        if(i-1 >= 0 && arr[i-1][j] != '#') {
            arr[i-1][j] = (char)((int) arr[i-1][j] + 1);
        }

        if(i+1 < n && arr[i+1][j] != '#') {
            arr[i+1][j] = (char)((int) arr[i+1][j] + 1);
        }

        if(j-1 > -1 && arr[i][j-1] != '#') {
            arr[i][j-1] = (char)((int) arr[i][j-1] + 1);
        }

        if(j+1 < n && arr[i][j+1] != '#') {
            arr[i][j+1] = (char)((int) arr[i][j+1] + 1);
        }

        // top left

        if(i-1 >= 0 && j-1 >=0 && arr[i-1][j-1] != '#') {
            arr[i-1][j-1] = (char)((int) arr[i-1][j-1] + 1);
        }

        // top right

        if(i-1 >= 0 && j+1 < n && arr[i-1][j+1] != '#') {
            arr[i-1][j+1] = (char)((int) arr[i-1][j+1] + 1);
        }

        // bottom left

        if(i+1 < n && j-1 >= 0 && arr[i+1][j-1] != '#') {
            arr[i+1][j-1] = (char)((int) arr[i+1][j-1] + 1);
        }

        // bottom right

        if(i+1 <n && j+1 < n && arr[i+1][j+1] != '#') {
            arr[i+1][j+1] = (char)((int) arr[i+1][j+1] + 1);
        }
    }
    public static void main(String[] args) {

        // Taking input from the user
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        char arr [][] = new char[n][n];

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                // System.out.print("arr["+i+"]"+"["+j+"]: ");
                arr[i][j] = sc.next().charAt(0);
                if(arr[i][j] == '-')
                    arr[i][j] = '0';
            }
        }
        sc.close();
        
        // Adding weights
        for(int i=0; i<n; i++) {
            for( int j =0; j<n; j++) {
                if(arr[i][j] == '#') {
                    numberingTheNeighbours(arr, i, j, n);
                }
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}
