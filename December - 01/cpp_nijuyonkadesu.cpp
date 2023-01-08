#include <sstream>
#include <iostream>
#include <string>
#include <vector>

void tokenize(std::string const &str, const char delim,
			std::vector<std::string> &out)
{
	size_t start;
	size_t end =0 ;
	size_t n = str.length();

	while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
	{
		end = str.find(delim, start);
		out.push_back(str.substr(start, end - start));
	}
}

int main()
{
    std::string output;
	std::string s = "4D,69,6C,69,74,61,72,79";
	const char delim = ',';

	std::vector<std::string> out;
	tokenize(s, delim, out);

//	for (auto &s: out) {
//		std::cout << s << std::endl;
//	}
    
   for (auto &s: out) {
       uint32_t chr = 0;
       std::stringstream ss;
       ss << std::hex<<s;
       ss>>chr;
       output.push_back(static_cast<unsigned char>(chr));
   }
   std::cout<<output;
	return 0;
}

