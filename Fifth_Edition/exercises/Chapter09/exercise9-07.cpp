/*
 * Answer:
 *
 *   The type vector<int>::size_type should be used.
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v = {1, 2, 3};

    for (vector<int>::size_type idx = 0; idx < 3; ++idx)
    {
        cout << v[idx] << endl;
    }
}
