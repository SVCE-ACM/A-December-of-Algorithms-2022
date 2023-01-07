#include <bits/stdc++.h>
using namespace std;

int main()
{
    int position, count = 1;
    string player, nums;
    int numbers;

    cout << "Position = ";
    cin >> position;
    position -= 1;

    // Assuming to get single digit numbers i.e. 0-9
    cout << "Set of numbers: ";
    cin >> nums;

    cout << "Player going first: ";
    cin >> player;

    while (nums[0] != 0)
    {
        nums[0] -= 1;
        swap(nums[0], nums[position]);
        count++;
    }

    string sen1 = "Tanika wins the game!\nBob loses the game";
    string sen2 = "Bob wins the game!\nTanika loses the game";

    string result = (player == "tanika" || player == "Tanika") ? ((count % 2 == 0) ? sen1 : sen2) : ((count % 2 == 0) ? sen2 : sen1);
    cout << result;

    return 0;
}