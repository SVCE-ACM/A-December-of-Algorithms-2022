import java.util.*;

public class java_DCBisht09 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=Integer.parseInt(sc.nextLine());
       
        String s=sc.nextLine();
        String[] arr=s.split(" ",0);
        String ans="";
        int ml=Integer.MIN_VALUE;
        for(String i:arr){
            if(i.length()%2!=0 && i.length()>ml ){
                ans=i;
                ml=i.length();
            }
        }

        if(ml==Integer.MIN_VALUE){
            System.out.println("Better luck next time");
        }
        else{
            System.out.println(ans);
        }
        // System.out.println(Arrays.toString(arr));
        sc.close();
    }
}
