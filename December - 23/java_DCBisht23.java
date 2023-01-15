import java.util.*;;

public class java_DCBisht23 {
    public static void main(String[] args) {

                
                Scanner sc=new Scanner(System.in);
                
                int roomCount=2;
                int[][] ques={{0,10},{1,5},{2,7},{3,4}};
                int noOfProcess=ques.length;
                List<List<Integer>>inp=new ArrayList<>();
        
                for(int[] arr:ques)
                {
                    List<Integer>list=new ArrayList<>();
                    list.add(arr[0]);
                    list.add(arr[1]);
                    inp.add(list);
                }
        
                Collections.sort(inp, new Comparator<>() {
        
                    public int compare(List<Integer> a, List<Integer> b) {
                        if (a.get(0) < b.get(0) || (int)a.get(0) == (int)b.get(0) && a.get(1) < b.get(1)) return -1;
                        return 1;
                    }
                });
        
                int[] rooms=new int[roomCount];
                int[] timeRemaining=new int[roomCount];
        
                int processCompleted=0;
                while(processCompleted<noOfProcess)
                {
                    int room=freeRoom(timeRemaining);
                    if(room>=0)
                    {
                        rooms[room]++;
                        timeRemaining[room]=inp.get(processCompleted).get(1)-inp.get(processCompleted).get(0) ;
                        processCompleted++;
                    }
                    reduceTime(timeRemaining);
                }
                int max=Integer.MIN_VALUE;
                int roomNo=0;
                for(int i=0;i<rooms.length;i++)
                {
                    if(rooms[i]>max)
                    {
                        roomNo=i;
                        max=rooms[i];
                    }
                }
        
                System.out.println(roomNo);
                sc.close();
            }
            public static int freeRoom(int[] t)
            {
        
                for(int i=0;i<t.length;i++)
                {
                    if(t[i]==0) return i;
                }
                return -1;
            }
            public static void reduceTime(int[] t)
            {
                for(int i=0;i<t.length;i++)
                {
                    if(t[i]>0) t[i]--;
        
                }
            }
}
