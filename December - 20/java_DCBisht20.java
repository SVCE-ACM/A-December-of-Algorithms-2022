import java.util.*;
import java.util.Map.*;

public class java_DCBisht20 {
    public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int  nProb = sc.nextInt();
		for(int k = 1; k <= nProb; ++k) {
			int n = sc.nextInt();
			int[] a = new int[n];
			int[] w = new int[n];
			for(int i = 0; i < n; ++i)
				a[i] = sc.nextInt();
			for(int i = 0; i < n; ++i)
				w[i] = sc.nextInt();
			long bestW = solve(a, w);
			System.out.println(bestW);

		}
        sc.close();
	}

	private static long solve(int[] a, int[] w) {
		int n = a.length;
		long best = 0;
		TreeMap<Integer, Long> map = new TreeMap<Integer, Long>();
		for(int k = 0; k < n; ++k) {
			Entry<Integer, Long> e = map.lowerEntry(a[k]);
			long b = (e == null ? 0 : e.getValue()) + w[k];
			SortedMap<Integer, Long> tail = map.tailMap(a[k]);
			List<Integer> del = new ArrayList<Integer>();
			for(Entry<Integer, Long> x : tail.entrySet()) {
				if(x.getValue().longValue() > b)
					break;
				del.add(x.getKey());
			}
			for(Integer i : del) {
				map.remove(i);
			}
			if(!map.containsKey(a[k]))
				map.put(a[k], b);
			if(best < b)
				best = b;
		}
		return best;
	}
}
