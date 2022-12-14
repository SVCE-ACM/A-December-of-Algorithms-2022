package acm;

import java.util.ArrayList;
import java.util.List;

public class GREEDnim_day12_java {

    static boolean[][]checked;
    static List<List<Integer>> ans;
    public static void main(String[] args) {

        //hardcoded input XD
        int[][]input={ {8,3,9}, {2,6,4}, {8,3,1}};

        ans=new ArrayList<>();
        checked=new boolean[input.length][input[0].length];
        allCombinations(input,0,0,new ArrayList<>());
        int min=0;

        for(int i=1;i<ans.size();i++)
        {
            min=sum(ans.get(min))<sum(ans.get(i))?min:i;
        }
        System.out.println("path taken :"+ans.get(min));
        System.out.println("the minimun coins dropped is :"+sum(ans.get(min)));



    }
    public static void allCombinations(int[][] inp, int i,int j,List<Integer>list)
    {
        if(i==inp.length-1 && j==inp[0].length-1 )
        {
            list.add(inp[i][j]);
            ans.add(new ArrayList<>(list));
            list.remove(list.size()-1);
            return;
        }
        if(i<0 || i>=inp.length || j<0 || j>=inp[0].length || checked[i][j]) return;
        checked[i][j]=true;
        list.add(inp[i][j]);

        allCombinations(inp,i+1,j,list);
        allCombinations(inp,i-1,j,list);
        allCombinations(inp,i,j-1,list);
        allCombinations(inp,i,j+1,list);
        list.remove(list.size()-1);
        checked[i][j]=false;

    }
    public static int sum(List<Integer>list)
    {
        int ans=0;
        for(int i=0;i<list.size();i++)
        {
            ans+=list.get(i);
        }
        return ans;
    }


}
