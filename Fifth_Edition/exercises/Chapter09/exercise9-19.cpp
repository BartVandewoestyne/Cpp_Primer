#include <list>     // changed
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::list;  // changed
using std::endl;
using std::string;

int main()
{
  list<string> seq;  // changed
  string word;
  while (cin >> word)
  {
    seq.push_back(word);
  }

  for (auto it = seq.cbegin(); it != seq.cend(); ++it)
  {
    cout << *it << endl;
  }
}
