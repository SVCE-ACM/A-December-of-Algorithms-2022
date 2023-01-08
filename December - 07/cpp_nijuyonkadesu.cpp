#include<iostream>
#include<random>
#include<algorithm>
#include<iterator>
#include<vector>
#include<string>

using namespace std;

void fillRandomCharacters(vector<vector<char>>&, int);
bool searchForWord(vector<vector<char>>&, int, string);

int main(){
    vector<vector<char>> wordpool;
    int rows=15;
    fillRandomCharacters(wordpool, rows);
    for(auto row: wordpool){
        for(int i=0; i<rows; i++)
            cout<<row[i]<<" ";
        cout<<"\n";
    }
    
    string query;
    cout<<"Enter key to search : ";
    cin>>query;

    if(searchForWord(wordpool, rows, query))
        cout<<"FOUND\n";
    else
        cout<<"NOT FOUND\n";

    return 0;
}

bool searchForWord(vector<vector<char>> &wordpool, int rows, string key){
    // points to a letter in key
    int letter_ptr_horizontal=0;
    int letter_ptr_vertical=0;
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            // Horizontal Search
            if(key[letter_ptr_horizontal]==wordpool[i][j]){
                if(++letter_ptr_horizontal == key.length()) return 1;
            } else {
                // on searching TIME in ...TIYYUNKME... will not return true, ie, resets value if target is not contigeous
                letter_ptr_horizontal = 0;
            }

           // Vertical Search 
            if(key[letter_ptr_vertical]==wordpool[j][i]){
                if(++letter_ptr_vertical == key.length()) return 1;
            } else {
                letter_ptr_vertical=0;
            }
        }
        // To prevent search to continue to next row / column
        letter_ptr_horizontal=0;
        letter_ptr_vertical=0;
    }
    return 0;
}

void fillRandomCharacters(vector<vector<char>> &wordpool, int rows){
    // create an instance of an engine, which generate seed for Mersenne twister engine.
    // std::random_device generates non-deterministic random int
    random_device rnd_device;

    // Specify the engine and distribution.
    mt19937 mersenne_engine {rnd_device()};
    uniform_int_distribution<int> dist {65, 90};
    
    // [captured]() {..} is lambda function in cpp
    auto gen = [&dist, &mersenne_engine](){
                   return static_cast<char>(dist(mersenne_engine));
               };

    vector<char> vec(rows);
    for(int i=0;i<rows;i++){
        generate(begin(vec), end(vec), gen);
        wordpool.push_back(vec);
    }  
}
