import java.util.*;

public class java_DCBisht15 {
    public static void main(String[] args) {

        String[][] inp = {{"Annalise", "01:09:00"},{ "Frank", "01:02:30"},{"Laurel", "01:04:19"}};
        Arrays.sort(inp, new Comparator<String[]>() {

            
            public int compare(String[] a, String[]b ) {

                String[] time1 = a[1].split(":", 0);
                String[] time2 = b[1].split(":", 0);
                int t = time1[0].compareTo(time2[0]);
                if (t != 0) return t;
                t = time1[1].compareTo(time2[1]);
                if (t != 0) return t;
                t = time1[2].compareTo(time2[2]);
                return t;

            }
        });

        for(int i=0;i<inp.length;i++){ 
        if(i!=inp.length-1)
            System.out.print(inp[i][0]+", ");
        else{
            System.out.print(inp[i][0]+".");
        }
        }

    } 
}
