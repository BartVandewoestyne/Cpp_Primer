#include <deque>
#include <iostream>
#include <list>

using std::cout;
using std::deque;
using std::endl;
using std::list;

int main()
{
  list<int> lst = {1, 2, 3, 4, 5};
  deque<int> d_even, d_odd;

  for (auto it = lst.cbegin(); it != lst.cend(); ++it)
  {
    if (*it % 2) {
      d_odd.push_back(*it);
    } else {
      d_even.push_back(*it);
    }
  }

  for (const auto& e : d_odd) {
    cout << e << endl;
  }

  for (const auto& e : d_even) {
    cout << e << endl;
  }
}
