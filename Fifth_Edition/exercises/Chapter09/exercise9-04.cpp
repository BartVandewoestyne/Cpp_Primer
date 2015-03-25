#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value)
{
    for (auto iter = begin; iter != end; ++iter)
    {
        if (*iter == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    if ( find(v.cbegin(), v.cend(), 5) )
    {
        cout << "Found!" << endl;
    } else {
        cout << "Not found." << endl;
    }
}
