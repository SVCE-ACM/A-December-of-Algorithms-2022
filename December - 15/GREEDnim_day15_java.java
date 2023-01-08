package acm;

import java.util.*;
import java.util.stream.Collectors;

public class GREEDnim_day15_java {

    public static void main(String[] args) {

        String[][] inp = {{"Annalise", "01:09:00"},{ "Frank", "01:02:30"},{"Laurel", "01:04:19"}};
        Arrays.sort(inp, new Comparator<String[]>() {

            @Override
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

        for(String[]ans:inp) System.out.print(ans[0]+" ,");

    }
}
