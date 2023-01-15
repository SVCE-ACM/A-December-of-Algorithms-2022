import java.util.*;

public class java_DCBisht04 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("No of Days : ");
        int n = sc.nextInt();
        int a[] = new int[n];
        System.out.println("Given stock market change values:");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int s = Integer.MIN_VALUE, cs = 0, sd = 0, fd = 0;
        int cstart = 0, cfinish = 0;
        for (int i = 0; i < n; i++) {
            if (cs <= 0 && cs + a[i] > cs) {
                cs = a[i];
                cstart = i;
            } else {
                cs += a[i];
            }
            cfinish = i;
            if (cs > s) {
                s = cs;
                sd = cstart;
                fd = cfinish;
            }
        }
        System.out.println("Profited value : " + s);
        System.out.println("proposed day to sell: Day:  " + (sd + 1) + " to Day: " + (fd + 1));
        System.out.println("stock market change values:" + Arrays.toString(Arrays.copyOfRange(a, sd, fd + 1)));
        sc.close();
    }
}
