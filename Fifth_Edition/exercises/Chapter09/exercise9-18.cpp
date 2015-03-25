#include <deque>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::deque;
using std::endl;
using std::string;

int main()
{
  deque<string> seq;
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
