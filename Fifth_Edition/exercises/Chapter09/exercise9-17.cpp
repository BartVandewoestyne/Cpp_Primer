/*
 * 1) c1 and c2 must not be unordered associative containers.
 *
 * 2) the appropriate comparison operator must be defined for the element type.
 *
 * TODO: expand this example...
 */

#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <string>
#include <vector>

using std::array;
using std::deque;
using std::forward_list;
using std::list;
using std::string;
using std::vector;

int main()
{
  // Sequential containers

  {
    vector<int> c1 = {1, 2};
    vector<int> c2 = {1, 2};
    if (c1 < c2) {};
  }
  {
    deque<int> c1 = {1, 2};
    deque<int> c2 = {1, 2};
    if (c1 < c2) {};
  }
  {
    list<int> c1 = {1, 2};
    list<int> c2 = {1, 2};
    if (c1 < c2) {};
  }
  {
    forward_list<int> c1 = {1, 2};
    forward_list<int> c2 = {1, 2};
    if (c1 < c2) {};
  }
  {
    array<int, 2> c1 = {1, 2};
    array<int, 2> c2 = {1, 2};
    if (c1 < c2) {};
  }
  {
    string c1("Foo");
    string c2("Bar");
    if (c1 < c2) {};
  }
}
