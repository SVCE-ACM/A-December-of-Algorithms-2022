#include <bits/stdc++.h>
using namespace std;

// DFS
bool search(vector<vector<char>> board, string word, int i, int j, int pos)
{
    if (pos == word.size())
        return true;
    if ((i < 0) || (i >= board.size()) || (j < 0) || (j >= board[i].size()))
        return false;

    char c = board[i][j];
    if (c == word[pos])
    {
        board[i][j] = '#';
        if (search(board, word, i - 1, j, pos + 1))
            return true;
        if (search(board, word, i + 1, j, pos + 1))
            return true;
        if (search(board, word, i, j - 1, pos + 1))
            return true;
        if (search(board, word, i, j + 1, pos + 1))
            return true;
        board[i][j] = c;
    }
    return false;
}

bool found(vector<vector<char>> board, string word)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (search(board, word, i, j, 0))
                return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<char>> wordmap = {
        {'A', 'S', 'E', 'E', 'R', 'T', 'I', 'V', 'E', 'N', 'E', 'S', 'S', 'L', 'J'},

        {'C', 'F', 'O', 'G', 'O', 'O', 'D', 'P', 'O', 'S', 'I', 'T', 'I', 'V', 'E'},

        {'O', 'P', 'E', 'N', 'B', 'M', 'U', 'R', 'E', 'W', 'O', 'P', 'R', 'P', 'S'},

        {'M', 'E', 'D', 'I', 'A', 'T', 'I', 'O', 'N', 'E', 'L', 'D', 'I', 'O', 'G'},

        {'M', 'A', 'A', 'S', 'R', 'E', 'G', 'J', 'E', 'W', 'I', 'N', 'W', 'I', 'N'},

        {'U', 'C', 'I', 'A', 'E', 'M', 'O', 'E', 'E', 'C', 'S', 'K', 'E', 'N', 'I'},

        {'N', 'E', 'M', 'R', 'S', 'H', 'A', 'C', 'D', 'V', 'T', 'W', 'T', 'T', 'L'},

        {'I', 'T', 'E', 'H', 'O', 'T', 'L', 'T', 'S', 'T', 'E', 'R', 'A', 'O', 'E'},

        {'C', 'A', 'S', 'P', 'L', 'G', 'L', 'S', 'I', 'U', 'N', 'E', 'R', 'F', 'E'},

        {'A', 'I', 'S', 'A', 'U', 'S', 'Y', 'T', 'P', 'O', 'I', 'S', 'E', 'V', 'F'},

        {'T', 'T', 'A', 'R', 'T', 'T', 'D', 'O', 'C', 'E', 'N', 'P', 'P', 'I', 'H'},

        {'I', 'O', 'G', 'A', 'I', 'G', 'U', 'P', 'Y', 'M', 'G', 'O', 'O', 'E', 'E'},

        {'O', 'G', 'E', 'P', 'O', 'A', 'F', 'P', 'Q', 'I', 'E', 'N', 'O', 'W', 'A'},

        {'N', 'E', 'C', 'O', 'N', 'F', 'L', 'I', 'C', 'T', 'S', 'D', 'C', 'E', 'R'},

        {'F', 'N', 'H', 'T', 'C', 'A', 'T', 'N', 'O', 'C', 'E', 'Y', 'E', 'B', 'T'}};

    string word;
    cout << "Input: ";
    cin >> word;

    transform(word.begin(), word.end(), word.begin(), ::toupper);

    bool tf = found(wordmap, word);
    string result = tf == true ? "FOUND" : "NOT FOUND";
    cout << result;

    return 0;
}