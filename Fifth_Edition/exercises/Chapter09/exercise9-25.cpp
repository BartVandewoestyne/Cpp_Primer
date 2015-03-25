#include <iostream>
#include <iterator>
#include <list>

using std::cout;
using std::endl;
using std::list;

int main()
{
    {
    // elem1 and elem2 unequal: erase from elem1 until right before elem2
    list<int> slist = {0, 1, 2, 3, 4, 5, 6, 7};
    auto elem1 = slist.begin();
    auto elem2 = slist.begin();
    std::advance(elem1, 1);
    std::advance(elem2, 3);
    elem1 = slist.erase(elem1, elem2);
    cout << "erasing 1 -> 3: ";
    for (auto e : slist)
      cout << e << " ";
    }
    cout << endl;

    {
    // elem1 and elem2 equal: nothing erased.
    list<int> slist = {0, 1, 2, 3, 4, 5, 6, 7};
    auto elem1 = slist.begin();
    auto elem2 = slist.begin();
    std::advance(elem1, 3);
    std::advance(elem2, 3);
    elem1 = slist.erase(elem1, elem2);
    cout << "erasing 3 -> 3: ";
    for (auto e : slist)
      cout << e << " ";
    }
    cout << endl;

    {
    // elem2 off the end: erase from elem1 on.
    list<int> slist = {0, 1, 2, 3, 4, 5, 6, 7};
    auto elem1 = slist.begin();
    auto elem2 = slist.end();
    std::advance(elem1, 3);
    elem1 = slist.erase(elem1, elem2);
    cout << "erasing 3 -> end: ";
    for (auto e : slist)
      cout << e << " ";
    }
    cout << endl;

    {
    // elem1 = elem2 = off the end: nothing erased
    list<int> slist = {0, 1, 2, 3, 4, 5, 6, 7};
    auto elem1 = slist.end();
    auto elem2 = slist.end();
    elem1 = slist.erase(elem1, elem2);
    cout << "erasing end -> end: ";
    for (auto e : slist)
      cout << e << " ";
    }
    cout << endl;
}
