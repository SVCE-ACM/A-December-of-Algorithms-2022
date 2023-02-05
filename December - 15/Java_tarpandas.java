import java.util.*;
class Detail{
	String name;
	String timestamp;
	Detail(String name, String timestamp){
		this.name = name;
		this.timestamp = timestamp;
	}
}

class Sortbytimestamp implements Comparator<Detail>
{
    public int compare(Detail a, Detail b){
        int hhmmssA = Integer.parseInt(a.timestamp.replace(":",""));
        int hhmmssB = Integer.parseInt(b.timestamp.replace(":",""));
        return hhmmssA - hhmmssB;
    }
}

class Java_tarpandas{
	public Queue<String> murderersMeet(List<Detail> list){
		Collections.sort(list, new Sortbytimestamp());

		Queue<String> queue=new LinkedList<>();
		for(Detail d : list){
			queue.add(d.name);
		}

		return queue;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		List<Detail> list=new ArrayList<>();
		String name, timestamp;
        // input type:
        // Name hh:mm:ss
		for(int i=0;i<3;i++){
			name = sc.next();
			while(true){
				timestamp = sc.next();
				String[] hhmmss = timestamp.split(":");
				if(Integer.parseInt(hhmmss[0])>24 || Integer.parseInt(hhmmss[1])>59 || Integer.parseInt(hhmmss[2])>59){
					System.out.println("Invalid Timestamp!! Enter again ...");
				}else{
					break;
				}
			}
			list.add(new Detail(name,timestamp));
		}

		Java_tarpandas ob=new Java_tarpandas();
		Queue<String> queue = ob.murderersMeet(list);

		System.out.println("");
		System.out.print(queue);

        sc.close();
	}
}