#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

int main(int argc, char* argv[])
{

  ifstream in(argv[1]);
  vector<string> v;
  string line;

  while (std::getline(in, line))
  {
    v.push_back(line);
  }

  for (const auto& s : v)
  {
    istringstream iss(s);
    string word;
    while (iss >> word)
    {
      cout << word << std::endl;
    }
  }

}
