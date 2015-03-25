#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int>::iterator find(vector<int>::iterator begin, vector<int>::iterator end, int value)
{
    for (auto iter = begin; iter != end; ++iter)
    {
        if (*iter == value)
        {
            return iter;
        }
    }
    return end;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    auto it = find(v.begin(), v.end(), 5);
    cout << "Found " << *it << endl;
}
