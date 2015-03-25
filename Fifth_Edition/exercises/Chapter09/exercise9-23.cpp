/*
 * if c.size() is 1, then all variables have the value of the only element of
 * the container.
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{

  vector<int> c = {9999};

  // check that there are elements before dereferencing an iterator or calling
  // front or back
  if (!c.empty()) {

      // val and val2 are copies of the value of the first element in c
      auto val = *c.begin(), val2 = c.front();

      // val3 and val4 are copies of the value of the last element in c
      auto last = c.end();
      auto val3 = *(--last);  // can't decrement forward_list iterators
      auto val4 = c.back();   // not supported by forward_list

      cout << "val = " << val << endl;
      cout << "val2 = " << val2 << endl;
      cout << "val3 = " << val3 << endl;
      cout << "val4 = " << val4 << endl;

  }
}
