#include <bits/stdc++.h>
using namespace std;
bool ismatch(string row , string word){
    if(size(row)<size(word))return false;
bool flag = false;
    char first_ch = word[0];
    for(int i=0;i<size(row);i++)
    {
       
       if(first_ch == row[i]){
           string temp  = row.substr(i,size(word));
           if(temp == word){
               flag= true;
               break;
           }
           i+=size(word);
       }
    }
    
    return flag;
}
int main() {
//  all chars are concataned 
    // from col to row using nested for loops and store them as string 
    // in grid
     vector<string>grid{
                    {"GEEE"},
                    {"GELL"},
                    {"IDGG"}};
    //  all chars are concataned 
    // from col to row using nested for loops and store them as string 
    // in grid_on_col
    vector<string>grid_on_col{
                    {"GGI"},
                    {"EED"},
                    {"ELG"},
                    {"ELG"}
    };              
    string word= "ELL";

    bool ans = false;
    for(auto row:grid)
    {
         ans = ismatch(row,word);
        if(ans == true)break;
    }
    if(ans!=true)
        {
            for(auto row:grid_on_col)
            {
                ans = ismatch(row,word);
                if(ans == true)break;
            }
            
        }
    
    
    ans==true?cout<<"FOUND":cout<<"NOT FOUND";
}
