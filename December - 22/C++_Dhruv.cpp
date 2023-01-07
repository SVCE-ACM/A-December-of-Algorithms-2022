#include <bits/stdc++.h>
using namespace std;

string encode(string codeword, string message) {
    int n = codeword.length();
    int m = message.length();
    string encoded_message = "";
    for (int i = 0; i < m; i++) {
        char c = message[i];
        int k = codeword[i % n] - 'A';
        char e = (c + k - 'A') % 26 + 'A';
        encoded_message += e;
    }
    return encoded_message;
}

int main() {
    string codeword = "LEMON";
    string message = "ATTACKATDAWN";
    string encoded_message = encode(codeword, message);
    cout << encoded_message << endl;
    return 0;
}
