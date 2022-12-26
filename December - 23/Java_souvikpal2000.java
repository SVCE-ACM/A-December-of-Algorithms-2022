import java.util.*;
class Room{
	int allocatedTime;
	int count;
	Room(int allocatedTime, int count){
		this.allocatedTime = allocatedTime;
		this.count = count;
	}
}
public class Java_souvikpal2000{
	public List<Room> allocateRooms(int n){
		List<Room> list = new ArrayList<>();
		for(int i=0;i<n;i++){
			list.add(new Room(0,0));
		}
		return list;
	}

	public int[][] sortMeetings(int[][] meetings){
		int length = meetings.length;
		int start=0, end=0;
		for(int i=0;i<length-1;i++){
			for(int j=(i+1);j<length;j++){
				if(meetings[i][0] > meetings[j][0]){
					start = meetings[i][0];
					meetings[i][0] = meetings[j][0];
					meetings[j][0] = start;

					end = meetings[i][1];
					meetings[i][1] = meetings[j][1];
					meetings[j][1] = end;
				}
			}
		}
		return meetings;
	}

	public List<Room> meetingRooms(int[][] meetings, int n, List<Room> rooms){
		int time = 0;
		int i = -1;
		while(i<meetings.length){
			Room room = null;
			for(Room r : rooms){
				if(r.allocatedTime == 0){
					room = r;
					i++;
					break;
				}else{
					r.allocatedTime = r.allocatedTime - 1;
					if(r.allocatedTime == 0){
						room = r;
						i++;
						break;
					}
				}
			}
			if(room != null){
				if(i > meetings.length-1){
					break;
				}
				room.allocatedTime = Math.abs(meetings[i][0] - meetings[i][1]);
				room.count = room.count + 1;
			}
			/*for(Room r : rooms){
				System.out.println(r.allocatedTime+" "+r.count);
			}
			System.out.println("");*/
			time++;
		}

		return rooms;
	}

	public int findRoomWithMaxMeetings(List<Room> rooms){
		int roomNo = 0;
		int noOfMeetings = 0;
		int roomWithMaxMeetings = 0;
		for(Room r : rooms){
			if(r.count > noOfMeetings){
				noOfMeetings = r.count;
				roomWithMaxMeetings = roomNo;
			}
			roomNo++;
		}
		return roomWithMaxMeetings;
	}

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		// Input 1:
		int n = 2; //Number of Rooms
		int[][] meetings = {
			{0,10},{1,5},{2,7},{3,4}
		};

		//Input 2:
		/*int n = 3; //Number of Rooms
		int[][] meetings = {
			{1,20},{2,10},{3,5},{4,9},{6,8}
		};*/

		Java_souvikpal2000 ob=new Java_souvikpal2000();
		List<Room> rooms = ob.allocateRooms(n);
		int[][] sortedMeetings = ob.sortMeetings(meetings);
		List<Room> meetingsEnd = ob.meetingRooms(sortedMeetings,n,rooms);
		int roomNo = ob.findRoomWithMaxMeetings(meetingsEnd);
		
		System.out.println("");
		System.out.println("Output:");
		System.out.println("");
		System.out.println(roomNo);
	}
}