#include <iostream>
#include <list>
#include <vector>

using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::list;
using std::vector;

int main()
{
  int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

  vector<int> v(begin(ia), end(ia));
  list<int> l(begin(ia), end(ia));

  for (auto it = v.begin(); it != v.end(); )
  {
    if (*it % 2 == 0) {
      it = v.erase(it);
    } else {
      ++it;
    }
  }

  for (auto it = l.begin(); it != l.end(); )
  {
    if (*it % 2 == 1) {
      it = l.erase(it);
    } else {
      ++it;
    }
  }

  cout << "original array:" << endl;
  for (auto e : ia)
    cout << e << " ";
  cout << endl;

  cout << "vector has only odd values:" << endl;
  for (auto e : v)
    cout << e << " ";
  cout << endl;

  cout << "list has only even values:" << endl;
  for (auto e : l)
    cout << e << " ";
  cout << endl;
}
