import java.util.*;

public class java_DCBisht21 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int disks = in.nextInt();
        System.out.println("The sequence of moves :");
        towerOfHanoi("tower I", "tower II", "tower III", disks);
        in.close();
    }

    public static void towerOfHanoi(String left, String middle, String right, int diskNo) {
        if (diskNo == 1) {
            System.out.println("Move disk " + diskNo + " from " + left + " to " + right);
            return;
        }

        towerOfHanoi(left, right, middle, diskNo - 1);
        System.out.println("Move disk " + diskNo + " from " + left + " to " + right);
        towerOfHanoi(middle, left, right, diskNo - 1);
    }
}
