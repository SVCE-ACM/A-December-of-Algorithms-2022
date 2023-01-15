import java.util.*;

public class java_DcBisht11 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word = in.nextLine();
        String[] warr = word.split(" ", 0);
        String word1 = in.nextLine();
        String[] arr = word1.split(" ", 0);
        int list[] = new int[arr.length];
        int k = 0;
        for (String h : arr) {
            list[k++] = Integer.parseInt(h);

        }
        int x=0, ans=-1,y=0;

        while(x<warr.length){
            if(warr[x].equals("~")){
                break;
            }
            x+=list[y++];
            ans++;

        }
        System.out.println("Score ="+ans);
        in.close();
    }
}
