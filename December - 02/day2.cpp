#include <iostream>
#include <string.h>

using namespace std;
int main() {
	
   string str1;
   cin >> str1;
   
   int l = str1.length();
   string str3 = str1.substr(l-4,2);
   string str2 = str1.substr(0, l-4);

   cout<<str3<<str2;
   return 0;
}
// This code is contributed by
// Samriddh Prasad
