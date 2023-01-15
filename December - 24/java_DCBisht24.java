import java.util.*;;

public class java_DCBisht24 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        java_DCBisht24 ob= new java_DCBisht24();
        String s=ob.crackSafe(n, k);
        System.out.println(s);
        
        sc.close();
    }
    public String crackSafe(int n, int k) {
        // String is immutable, use StringBuilder
        StringBuilder result = new StringBuilder();
        // This is total number of permutation we need in the set
        int total = (int) (Math.pow(k, n));
        
        // This is just for fun and to prove that we can start with any permutation
        Random rand = new Random();
        for (int i = 0; i < n; i++) {
            result.append(rand.nextInt(k));
        }

        Set<String> visited = new HashSet<>();
        visited.add(result.toString());

        dfs(result, total, visited, n, k);

        return result.toString();
    }

    private boolean dfs(StringBuilder result, int target, Set<String> visited, int n, int k) {
        if (visited.size() == target) {
            // We are done, terminate all recursion
            return true;
        }
        String prev = result.substring(result.length() - n + 1, result.length());
        for (int i = 0; i < k; i++) {
            String next = prev + i;
            if (!visited.contains(next)) {
                visited.add(next);
                result.append(i);
                if (dfs(result, target, visited, n, k)) {
                    // recursively terminate, we are done
                    return true;
                }
                else {
                    // We got stuck so this will not yield optimal path, go back
                    // Try other path
                    visited.remove(next);
                    result.delete(result.length() - 1, result.length());
                }
            }
        }
        return false;
    }
}
