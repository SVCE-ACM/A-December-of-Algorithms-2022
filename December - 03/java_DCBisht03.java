
import java.util.*;
public class java_DCBisht03 {
    public static void main(String[] args)
    {
        char[][] input=getInput();
        char[][] ans=minesweeper(input);
        for(char[] arr:ans)
        {
            System.out.println(Arrays.toString(arr));
        }



    }
    public static char[][] getInput()
    {
        Scanner in=new Scanner(System.in);
        int rows=in.nextInt();
        char[][] input=new char[rows][rows];
        for(int i=0;i<rows;i++)
        {
            String inp=in.next();
            for(int j = 0; j< rows; j++)
            {
                input[i][j]=inp.charAt(j);
            }
        }
        in.close();
        return input;
    }
    public static char[][] minesweeper(char[][] input)
    {
        char[][] result=new char[input.length][input[0].length];
        for(char[] arr:result)
        {
            Arrays.fill(arr,'0');
        }
        for(int i=0;i<input.length;i++)
        {
            for(int j=0;j<input[0].length;j++)
            {
                if(input[i][j]=='#') makeChanges(result,i,j);
            }
        }
        return result;
    }
    public static void makeChanges(char[][]arr,int row,int col)
    {
        arr[row][col]='#';
            int i=0;
            for(int k=col-1;i<3;i++) //for prev row
            {
                if(k>=0 && k<arr[0].length)
                {
                    if(row-1>=0 && arr[row-1][k]!='#')
                    {
                        int val = arr[row - 1][k] + 1;
                        arr[row - 1][k] = (char)val;
                    }
                    if(arr[row][k]!='#')
                    {
                        int val = arr[row][k] + 1;
                        arr[row ][k] = (char)val;
                    }
                    if(row+1<arr.length && arr[row+1][k]!='#')
                    {
                        int val = arr[row+1][k] + 1;
                        arr[row +1][k] = (char)val;
                    }

                }
                k++;

            }
            

    }
}


 