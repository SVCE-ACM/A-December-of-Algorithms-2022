import java.util.Scanner;
public class Java_tarpandas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 3; //sc.nextInt();
        int arr[] = new int[3];

        System.out.print("Position=");
        int p = sc.nextInt();
        if(p<=n && p>0){

            String friends[] = {"Tanika", "Bob"};
            p -=1;

            System.out.print("Set of numbers: ");
            for(int i=0; i<n;i++) {
                arr[i] = sc.nextInt();
            }

            sc.nextLine();
            System.out.print("Player going first: ");
            String name = sc.nextLine();

            int flag = -1;
            for(int i=0; i<2; i++) {
                if(name.toLowerCase().equals(friends[i].toLowerCase()))
                    flag = i;
            }

            while(arr[0] != 0) {

                // Switching turns
                if(flag == 0)
                    flag = 1;
                else
                    flag = 0;

                // Subtracting 1 from the first value
                arr[0] -= 1;

                // swapping number at p and index 0
                int temp = arr[0];
                arr[0] = arr[p];
                arr[p] = temp;

                // System.out.println(arr[0]+" "+arr[1]+" "+arr[2]+" "+friends[flag]);
            }
            System.out.println(friends[1 - flag]+" wins the game!");
            System.out.println(friends[flag]+" wins the game!");
        }

        sc.close();
    }
}
