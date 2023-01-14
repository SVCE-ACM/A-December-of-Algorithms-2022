import java.util.*;
public class Java_Ankur2606{
	public int findMax(int no1, int no2){
		int max = 0;
		if(no1>no2){
			max = no1;
		}else{
			max = no2;
		}
		return max;
	}

	public int findMin(int no1, int no2){
		int min = 0;
		if(no1<no2){
			min = no1;
		}else{
			min = no2;
		}
		return min;
	}

	public int h2oReceptacle(String heights){
		String[] arr = heights.split(",");
		
		int maxArea = 0;
		for(int i=0;i<arr.length-1;i++){
			for(int j=(i+1);j<arr.length;j++){
				int height = findMin(Integer.parseInt(arr[i]), Integer.parseInt(arr[j]));
				int gap = (j-i);
				int area = gap*height;
				maxArea = findMax(maxArea, area);
			}
		}

		return maxArea;
	}	

	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.print("Input: height = ");
		String heights = sc.next();

		Java_Ankur2606 ob=new Java_Ankur2606();
		int area = ob.h2oReceptacle(heights);

		System.out.print("Output: ");
		System.out.print(area);
	}
}