#include <iostream>
#include <list>
#include <string>

using std::cout;
using std::endl;
using std::list;
using std::string;

int main()
{
    list<string> lst{"foo", "bar"};

    // Read elements in a list.
    for (list<string>::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << endl;
    }

    // Write elements in a list.
    for (list<string>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        *it = "cleared";
    }

    // Read them again to check if they were actually written.
    for (list<string>::const_iterator it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << endl;
    }

}
