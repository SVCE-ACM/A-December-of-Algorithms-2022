import java.util.*;;

@SuppressWarnings("unchecked")
public class java_DCBisht29 {
    static List<Integer>[] shouldIncrease;
    static int[] ans;

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] rating = new int[n];
        for (int i = 0; i < n; i++)
            rating[i] = in.nextInt();

        ans = new int[n];
        shouldIncrease = new ArrayList[n];

        for (int i = 0; i < n; i++) {
            int left = i - 1;
            int right = i + 1;
            List<Integer> list = new ArrayList<>();
            if (left >= 0 && rating[left] > rating[i])
                list.add(left);
            if (right < n && rating[right] > rating[i])
                list.add(right);
            shouldIncrease[i] = list;

        }

        Arrays.fill(ans, 1);
        for (int i = 0; i < ans.length; i++) {
            addChocos(i);
        }
        int sum = 0;
        for (int ele : ans)
            sum += ele;
        System.out.println(sum);
        in.close();
    }

    static void addChocos(int k) {

        List<Integer> list = shouldIncrease[k];
        for (int i = 0; i < list.size(); i++) {
            int bigBro = list.get(i);
            if (ans[bigBro] <= ans[k]) {
                ans[bigBro]++;
                addChocos(bigBro);
            }

        }
    }
}
