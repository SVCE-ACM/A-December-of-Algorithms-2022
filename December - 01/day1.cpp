#include <bits/stdc++.h>
using namespace std;

void tokenize(string const &str, const char delim, vector<string> &out)
{
  size_t start;
  size_t end = 0;
  size_t n = str.length();

  while ((start = str.find_first_not_of(delim, end)) != string::npos)
  {
    end = str.find(delim, start);
    out.push_back(str.substr(start, end - start));
  }
}

int main()
{
  string output;
  string s = "56, 6F, 75, 67, 68, 74";
  const char delim = ',';

  vector<string> out;
  tokenize(s, delim, out);

  for (auto &s : out)
  {
    uint32_t chr = 0;
    stringstream ss;
    ss << hex << s;
    ss >> chr;
    output.push_back(static_cast<unsigned char>(chr));
  }
  cout << output;
  return 0;
}
