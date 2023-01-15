import java.util.*;

class java_DCBisht26 {

    public static void main(String[] args) {
        int[][] arr = { { 2 }, { 3, 4 }, { 2 }, { 2 } };
        // int[][] arr={{2}, {5, 4, 6}, {3}, {4}, {5}, {6}};
        boolean[] heard = new boolean[arr.length + 1];
        heard[1] = true;
        Queue<Integer> q = new LinkedList<>();
        for (int ele : arr[0]) {
            q.offer(ele);
        }

        while (!q.isEmpty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                Integer ele = q.poll();
                heard[ele] = true;
                for (int x : arr[ele - 1]) {
                    if (!heard[x])
                        q.offer(x);
                }
            }
        }

        boolean spread = true;
        for (int i = 1; i < heard.length; i++) {
            if (!heard[i]) {
                spread = false;
                break;
            }
        }
        if (spread)
            System.out.println("SPREAD");
        else
            System.out.println("NOPE");

    }
}