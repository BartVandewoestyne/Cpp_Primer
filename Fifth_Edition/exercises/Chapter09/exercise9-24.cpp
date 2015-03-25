#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> v;

  cout << v.at(0) << endl;     // throws std::out_of_range
  cout << v[0] << endl;        // undefined
  cout << v.front() << endl;   // undefined
  cout << *v.begin() << endl;  // TODO
}
