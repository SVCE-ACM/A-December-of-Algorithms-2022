#include <iostream>
using namespace std;
 
 
int secondLargest(int arr[], int n) {
    int largest = 0, secondLargest = -1,a;
 
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest])
            largest = i;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[largest]) {
            if (secondLargest == -1)
                secondLargest = i;
            else if (arr[i] > arr[secondLargest])
                secondLargest = i;
        }
        
    }
    a = arr[secondLargest];
        largest++;
        secondLargest++;
        int b= largest-secondLargest;
        if(b<0)
        b=b*-1;
        a=b*a;
    return a;
}
 
 
int main() {
    // height =
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int second_Largest = secondLargest(arr, n);
    cout<<second_Largest;
}

