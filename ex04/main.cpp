
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
        return 0;

	std::string filename = argv[1];
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	std::string  text;
	size_t start = 0;
	char c;

	if (filename.size() == 0 || str1.size() == 0 || str2.size() == 0)
	   return 0;
   	std::ifstream file1(filename);
   	std::ofstream file2(filename + ".replace");
	if ((!(file1)) || (!(file2)))
		return (0);
	while (file1.get(c))
		text = text + c;
	while ((start = text.find(str1, start)) != std::string::npos)
	{
		text.replace(start , str1.size() , str2);
		start += str2.size();
	}
	file2 << text;
    return 0;
}