#include <list>
#include <string>
#include <vector>

using std::list;
using std::string;
using std::vector;

int main()
{
  list<const char*> lcc{"Foo", "Bar"};
  vector<string> vs;
  vs.assign(lcc.cbegin(), lcc.cend());
}
