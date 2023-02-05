import java.util.Scanner;
class Java_tarpandas{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("n=");
        int n=sc.nextInt();
        sc.nextLine();
        System.out.print("ratings = ");
        String str = sc.nextLine();
        String [] tempRatings = str.split(",");
        int [] ratings = new int[n];
        for(int i=0;i<n;i++) {
            ratings[i] = Integer.parseInt(tempRatings[i]);
        }
        sc.close();

        int [] candies = new int[n];
        for(int i=0;i<n;i++) {
            if(i==0) {
                if(ratings[i+1] < ratings[i]){
                    candies[i] = 2;
                } else {
                    candies[i] = 1;
                }
            } else if (i == n-1) {
                if(ratings[i-1] < ratings[i]){
                    candies[i] = 2;
                } else {
                    candies[i] = 1;
                }
            } else {
                int temp=0;
                if(ratings[i-1] < ratings[i]) {
                    temp++;
                }
                if(ratings[i+1] < ratings[i] ) {
                    temp++;
                }
                candies[i] = temp+1;
            }
        }

        for(int i=0; i<n-1 ;i++) {
            if(candies[i] == candies[i+1]) {
                if(ratings[i] > ratings[i+1]) {
                    candies[i+1] -= 1;
                } else {
                    candies[i] -= 1;
                }
            }
        }

        int sum=0;
        for(int i=0; i<n;i++) {
            sum+= candies[i];
        }
        System.out.println(sum);
    }
}