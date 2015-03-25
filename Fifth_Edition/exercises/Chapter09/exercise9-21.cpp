/*
 * Each iteration inserts an element ahead of the first element in the vector.
 *
 * "Because vectors use an array as their underlying storage, inserting elements in
 *  positions other than the vector end causes the container to relocate all the
 *  elements that were after position to their new positions. This is generally an
 *  inefficient operation compared to the one performed for the same operation by
 *  other kinds of sequence containers (such as list or forward_list)"
 * (source: http://www.cplusplus.com/reference/vector/vector/insert/)
 */

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
  string word;
  vector<string> v;
  auto iter = v.begin();
  while (cin >> word)
     iter = v.insert(iter, word);  // same as calling push_front

  for (auto e : v)
    cout << e << endl;
}
