import java.util.*;
@SuppressWarnings("unchecked")
class java_DCBisht17{
    public static void main(String[] args) {

        Scanner in=new Scanner(System.in);
        String inp=in.next();
        int row=in.nextInt();

        ArrayList<Integer>[] index = new ArrayList[row];
        for(int i=0;i<row;i++)
        {
            index[i]=new ArrayList<>();
        }

        int i=0;

        while(i<inp.length())
        {

            for(int j=0;j<row && i<inp.length(); j++)
            {
                index[j].add(i++);
            }
            for(int j=row-2;j>0 && i<inp.length();j--)
            {
                index[j].add(i++);
            }
        }
        for(List<Integer>ele:index)
        {
            for(int k:ele)
            {
                System.out.print(inp.charAt(k));
            }
        }
        in.close();
    }
}