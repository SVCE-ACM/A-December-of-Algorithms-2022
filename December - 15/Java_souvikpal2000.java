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

class Java_souvikpal2000{
	public Queue<String> theMurderersMeet(List<Detail> list){
		Collections.sort(list, new Sortbytimestamp());

		Queue<String> queue=new LinkedList<>();
		for(Detail d : list){
			queue.add(d.name);
		}

		return queue;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input: ");
		List<Detail> list=new ArrayList<>();
		String name, timestamp;
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

		Java_souvikpal2000 ob=new Java_souvikpal2000();
		Queue<String> queue = ob.theMurderersMeet(list);

		System.out.println("");
		System.out.print("Output: "+queue);
	}
}