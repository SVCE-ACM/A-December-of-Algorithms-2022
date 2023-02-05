
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Declare a string to store the hexadecimal input
    string hex;
    int size, string_set;
    cout << "Enter the number of hexadecimal strings sets\n";
    cin >> string_set;
    cout << endl;
    // Prompt the user to enter a hexadecimal string

    // Convert the hexadecimal string to an ASCII string
    string ascii[string_set];
    for (int k = 0; k < string_set; k++)
    {
        cout<<"For the string set "<<k+1<<endl;
        cout << "Enter the size of  string\n";
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            cout << "Enter the hexadecimal value at index " << j + 1 << endl;
            cin >> hex;
            //  { 56, 6F, 75, 67, 68, 74}
            for (int i = 0; i < hex.length(); i += 2)
            {
                char c = (char)strtol(hex.substr(i, 2).c_str(), NULL, 16);
                ascii[k] += c;
            }
        }
    }

    for (int i = 0; i < string_set; i++)
    {
        cout << ascii[i]<< endl;
    }
    

    // Print the ASCII string

    return 0;
}
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// int main(){
//     string t;
//     cout<<"Enter a vector of arrays\n";
//     vector<string> a[5];
//     for (int i = 0; i <2 ; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cin>>t;
//             a[i].push_back(t);
//         }
//     }
//     for (int i = 0; i < 2; i++) {
//         for (auto it = a[i].begin();
//              it != a[i].end(); it++) {
//             cout << stoi(*it) << ' ';
//         }
//         cout << endl;
//     }

//     return 0;
// }
