#include<iostream>
using namespace std;

void towers(int num, char left, char right, char temp)
{
    if (num == 1)
    {
        cout<<"\n Move  disk 1 from tower "<<left<< " to tower "<< right;
        return;
    } 
    towers(num - 1, left, temp, right);
    cout<<"\n Move disk  "<<num<< "from tower "<<left<<"  to tower "<< right;
    towers(num - 1, temp, right, left);
}
 
int main()
{
    int num;
 
    cout<<"Number of disks : ";
    cin>>num;
    cout<<"The sequence of moves are :\n";
    towers(num, '1', '2', '3');
    return 0;
}
