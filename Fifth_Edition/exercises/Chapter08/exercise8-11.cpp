#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cin;
using std::istringstream;
using std::string;
using std::vector;

struct PersonInfo {
  string name;
  vector<string> phones;
};

int main()
{
  string line;
  string word;
  vector<PersonInfo> people;
  istringstream record;

  while (std::getline(cin, line))
  {
    PersonInfo info;
    record.clear();
    record.str(line);
    record >> info.name;
    while (record >> word)
    {
      info.phones.push_back(word);
    }
    people.push_back(info);
  }
}
