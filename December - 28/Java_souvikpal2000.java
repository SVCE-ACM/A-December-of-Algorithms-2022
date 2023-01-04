import java.util.*;
public class Java_souvikpal2000{
	public int findFirstSmallest(List<Integer> tail){
		int firstSmallest = Integer.MAX_VALUE;
		for(Integer tailie : tail){
			if(firstSmallest > tailie){
				firstSmallest = tailie;
			}
		}
		return firstSmallest;
	}

	public int findSecondSmallest(List<Integer> tail, int firstSmallest){
		int secondSmallest = Integer.MAX_VALUE;
		for(Integer tailie : tail){
			if(secondSmallest > tailie){
				int flag = tailie;
				if(flag > firstSmallest){
					secondSmallest = flag;
				}
			}
		}
		return secondSmallest;
	}

	public int findFirstLargest(List<Integer> tail){
		int firstLargest = Integer.MIN_VALUE;
		for(Integer tailie : tail){
			if(firstLargest < tailie){
				firstLargest = tailie;
			}
		}
		return firstLargest;
	}

	public int findSecondLargest(List<Integer> tail, int firstLargest){
		int secondLargest = Integer.MIN_VALUE;
		for(Integer tailie : tail){
			if(secondLargest < tailie){
				int flag = tailie;
				if(flag < firstLargest){
					secondLargest = flag;
				}
			}
		}
		return secondLargest;
	}

	public int minimumBetweenTwo(int a, int b){
		int min = a<b? a:b;
		return min;
	}

	public int firstApproach(int firstLargest, int secondLargest, int firstSmallest){
		int travelTime = firstLargest + firstSmallest + secondLargest + firstSmallest;
		return travelTime;
	}

	public int secondApproach(int firstLargest, int firstSmallest, int secondSmallest){
		int travelTime = secondSmallest + firstSmallest + firstLargest + secondSmallest;
		return travelTime;
	}

	public int theJourneyToTheEternalEngine(List<Integer> tail, int n){
		int firstSmallest = findFirstSmallest(tail);
		int secondSmallest = findSecondSmallest(tail,firstSmallest);

		int travelTime = 0;

		while(true){
			if(tail.size() == 3){
				int firstLargest = findFirstLargest(tail);
				travelTime = travelTime + (secondSmallest + firstSmallest + firstLargest);
				break;
			}
			if(tail.size() == 2){
				travelTime = travelTime + secondSmallest;
				break;
			}
			else{
				int firstLargest = findFirstLargest(tail);
				int secondLargest = findSecondLargest(tail,firstLargest);

				int result01 = firstApproach(firstLargest,secondLargest,firstSmallest);
				int result02 = secondApproach(firstLargest,firstSmallest,secondSmallest);

				tail.remove(tail.indexOf(firstLargest));
				tail.remove(tail.indexOf(secondLargest));

				int minTime = minimumBetweenTwo(result01,result02);

				travelTime = travelTime + minTime;
			}
		}
		
		return travelTime;
	}

	public float secondsToMinutes(int time){
		float timeInMinutes = (float)time/60;
		return timeInMinutes;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Input:");
		System.out.println("");
		int n;
		while(true){
			System.out.print("n=");
			n = sc.nextInt();
			System.out.println("");

			if(n >= 3){
				break;
			}else{
				System.out.println("There needs to be at least 3 Tailies");
				System.out.println("");
			}
		}

		System.out.print("Walking time: ");
		int[] walkingTime = new int[n];
		for(int i=0;i<n;i++){
			walkingTime[i] = sc.nextInt();
		}
		List<Integer> tail = new ArrayList<>();
		for(int time : walkingTime){
			tail.add(time);
		}

		Java_souvikpal2000 ob=new Java_souvikpal2000();
		int timeInSeconds = ob.theJourneyToTheEternalEngine(tail,n);
		float timeInMinutes = ob.secondsToMinutes(timeInSeconds);

		System.out.println("");
		System.out.println("Output:");
		System.out.println("");
		System.out.println(String.format("%.3f",timeInMinutes));
	}
}