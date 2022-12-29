#include <iostream>
#include <string>

using namespace std;

string get_unique_chars(string string1, string string2) {
    string unique_chars = "";
    for (char c : string1) {
        if (string2.find(c) != string::npos && isalpha(c)) {
            unique_chars += c;
        }
    }
    return unique_chars;
}

int main() {
    // Test the function
    string string1 = "My world evolves in a beautiful space called Tesh.";
    string string2 = "sworn love lived";
    cout << get_unique_chars(string1, string2) << endl;
    return 0;
}
