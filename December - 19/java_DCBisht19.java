import java.util.*;;

public class java_DCBisht19 {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String big=in.nextLine().toLowerCase();
        String smol=in.nextLine().toLowerCase();
        big=big.replaceAll("[^a-z]+", "");
        smol=smol.replaceAll("[^a-z]+", "");
        int[]map=new int[26];
        for(char s:smol.toCharArray())
        {
            map[s-'a']++;
        }

        int s=0;
        int e=0;
        while(e<big.length())
        {

            int index=big.charAt(e)-'a';
            map[index]--;
            if(map[index]<0)
            {
                for(;s<=e;s++) map[big.charAt(s)-'a']++;
            }
            if(e-s+1 == smol.length()) break;
            e++;

        }
        System.out.println(big.substring(s,e+1));
        in.close();
    }
}
