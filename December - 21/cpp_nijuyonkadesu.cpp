#include<iostream>

using namespace std;

void hanoi(int disks, char source, char auxillary, char destination);

int main (int argc, char *argv[])
{
    int disks;
    cout<<"Number of disks: ";
    cin>>disks;
    hanoi(disks, 'A', 'B', 'C');
    return 0;
}

void hanoi(int disk, char source, char auxillary, char destination){
    if(disk==1) {
        cout<<"Move disk "<<disk<<" from tower "<<source<<" to tower "<<destination<<endl;
        return;
    }
    hanoi(disk - 1, source, destination, auxillary);
    cout<<"Move disk "<<disk<<" from tower "<<source<<" to tower "<<destination<<endl;
    hanoi(disk - 1, auxillary, source, destination);
}
