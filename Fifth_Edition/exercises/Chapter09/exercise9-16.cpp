#include <iostream>
#include <list>
#include <vector>

using std::endl;
using std::list;
using std::vector;
using std::cout;

int main()
{
  vector<int> v = {1, 2, 3};
  list<int> l = {1, 2, 3};

  vector<int> vcomp(l.cbegin(), l.cend());
  if (vcomp == v) {
    cout << "vector and list are equal!" << endl;
  } else {
    cout << "vector and list are not equal!" << endl;
  }
}
