#include <list>
#include <vector>

using std::list;
using std::vector;

int main()
{
  list<int> li = {1, 2};
  vector<double> vd1(li.cbegin(), li.cend());

  vector<int> vi = {1, 2};
  vector<double> vd2(vi.cbegin(), vi.cend());
}
