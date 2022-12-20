package acm;

public class GREEDnim_day16_java {

    static int[] input;

    public static void main(String[] args) {
        input= new int[]{6,2,5,4,8};

        int s=0;
        int e=input.length-1;
        int max=Integer.MIN_VALUE;
        while(s<e)
        {
            int curVol=waterStored(s,e);
            if(curVol>max) max=curVol;

            if(input[s]>input[e]) e--;
            else s++;
        }
        System.out.println(max);

    }
    public static int  waterStored(int left,int right)
    {
        int length=right-left;
        int height=Math.min(input[left],input[right]);
        return length*height;
    }
}
