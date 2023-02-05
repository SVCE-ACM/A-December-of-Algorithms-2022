import java.util.*;;

public class java_DCBisht16 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word = in.nextLine();
        String[] arrayOfWord = word.split(" ", 0);
        int a[] = new int[arrayOfWord.length];
        int k = 0;
        for (String h : arrayOfWord) {
            a[k++] = Integer.parseInt(h);
        }

        int l=0,r=k-1,ans=Integer.MIN_VALUE;
        while(l<r){
            ans=Math.max(ans,(r-l)*Math.min(a[l],a[r]));
            if(a[l]<a[r]){
                l++;
            }
            else{
                r--;
            }
        }
        // System.out.println(Arrays.toString(a));
        System.out.println(ans);
        in.close();
    }
}
