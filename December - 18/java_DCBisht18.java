import java.util.*;

public class java_DCBisht18 {
    static int[][] adjacency;
    static HashMap<Integer, ArrayList<Integer>> neighbours;

    static boolean[] alreadySaw;

    static int min = Integer.MAX_VALUE;
    static ArrayList<Integer> ans;

    public static void main(String[] args) {

        adjacency = new int[][] {
                { 0, 3, 4, 5, -1, -1, -1, -1 },
                { 3, 0, 2, -1, -1, 5, -1, -1 },
                { 4, 2, 0, 7, 3, 6, 2, -1 },
                { 5, -1, 7, 0, 2, -1, -1, -1 },
                { -1, -1, 3, 2, 0, -1, 4, -1 },
                { -1, 5, 6, -1, -1, 0, 5, 2 },
                { -1, -1, 2, -1, 4, 5, 0, 1 },
                { -1, -1, -1, -1, -1, 2, 1, 0 } };
        alreadySaw = new boolean[adjacency.length];
        neighbours = new HashMap<>();
        int i = 0;
        for (int[] arr : adjacency) {
            int col = 0;
            ArrayList<Integer> l = new ArrayList<>();
            for (int ele : arr) {
                if (ele > 0)
                    l.add(col);
                col++;
            }
            neighbours.put(i++, l);
        }

        Scanner in = new Scanner(System.in);
        int source = in.next().charAt(0) - 'P';
        ArrayList<Integer> dummy = new ArrayList<>();
        dummy.add(source);
        alreadySaw[source] = true;
        dfs(source, 0, dummy);
        System.out.print("path is :");
        int k=0;
        for (int ele : ans) {
            if(ans.size()-1==k)
            System.out.print((char) (ele + 'P') + " ");
            else{
                System.out.print((char) (ele + 'P') + " - ");
            }
            k++;
        }
        System.out.println();
        System.out.println("shortest time :" + min + " hours");
        in.close();
    }

    static void dfs(int source, int sum, ArrayList<Integer> path) {
        if (source == adjacency.length - 1) {
            if (sum < min) {
                min = sum;
                ans = new ArrayList<>(path);
            }
            return;
        }

        List<Integer> neigh = neighbours.get(source);

        for (int next : neigh) {

            if (!alreadySaw[next]) {
                alreadySaw[next] = true;
                path.add(next);
                dfs(next, sum + adjacency[source][next], path);
                path.remove(path.size() - 1);
                alreadySaw[next] = false;
            }

        }
    }

}
