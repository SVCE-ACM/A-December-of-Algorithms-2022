#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> splitter(vector<string>& person);

int main (int argc, char *argv[])
{
    string name, time;
    int count = 3;
    vector<vector<string>> persons(3, vector<string>(2));
    cout<<"Enter person name and Time in HH:MM:SS "; // mommy 10:00:00 omit `{`

    for(int i=0 ;count !=0; count--){
        cin>>name;
        cin>>time;

        persons[i].push_back(name);
        persons[i].push_back(time);
        i++;
    }

    sort(persons.begin(), persons.end(), [](vector<string>& lhs, vector<string>& rhs)
            {
            vector<int> timeOne = splitter(lhs); // HH MM SS in 0 1 2 indices
            vector<int> timeTwo = splitter(rhs);

            if(timeOne[0] < timeTwo[0]) return true;
            else if (timeOne[0] > timeTwo[0]) return false;
            else{
 
                if(timeOne[1] < timeTwo[1]) return true;
                else if (timeOne[1] > timeTwo[1]) return false;
                else {
            
                    if(timeOne[2] < timeTwo[2]) return true;
                    else if (timeOne[2] > timeTwo[2]) return false;
                }
                
            }
            return false;
            }); 
        
    for(auto person: persons){
        for(auto row: person){
            cout<<row;
        }
        cout<<"\n";
    }

    return 0;
}

vector<int> splitter(vector<string>& person) {
    vector<int> time;
    int digit;

    auto it = person[3].begin(); // Please never ask me why 3

    digit = *it - '0';
    *it++;
    digit = digit * 10;
    digit = digit + (*it - '0');
    time.push_back(digit); // HH

    *it++; // skip delimiter
    *it++; // skip delimiter

    digit = *it - '0';
    *it++;
    digit = digit * 10;
    digit = digit + (*it - '0');
    time.push_back(digit); // MM 

    *it++; // skip delimiter
    *it++; // skip delimiter

    digit = *it - '0';
    *it++;
    digit = digit * 10;
    digit = digit + (*it - '0');
    time.push_back(digit); // SS 

    return time;
}
