
import java.util.*;
public class java_DCBisht02 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String ans=s.substring(s.length()-4,s.length()-2)+s.substring(0,s.length()-4);
        System.out.println(ans);
        sc.close();
    }
}
