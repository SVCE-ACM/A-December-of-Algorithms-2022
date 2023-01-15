import java.util.*;

public class java_DCBisht05 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("fuel_price= ");
        int n=sc.nextInt();
        int a[]=new int[32];
        a[0]=n;
        for(int i=1;i<32;i++){
            if(i%3==0 && i%5==0){
                a[i]=n+1;
            }
            else if(i%3==0){
                a[i]=n+3;
            }
            else if(i%5==0){
                a[i]=n-2;
            }
            else{
                a[i]=n;
            }
        }
        int sum = Arrays.stream(a).sum()-a[0];
        sum*=2;
        System.out.println("Expenditure= "+sum);
        if(sum<=5000){
            System.out.println("EXPENDITURE WITHIN LIMIT");
        }
        else{
                System.out.println("EXPENDITURE EXCEEDING LIMIT");
        }
        sc.close();
    }
}
