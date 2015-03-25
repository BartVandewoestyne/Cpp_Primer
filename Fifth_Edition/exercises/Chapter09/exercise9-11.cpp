#include <vector>

using std::vector;

int main()
{
  vector<int> v1;                          // {0}

  vector<int> v2a(v1);                     // {0}
  vector<int> v2b = v1;                    // {0}

  vector<int> v3a{1, 2, 3};                // {1, 2, 3}
  vector<int> v3b = {1, 2, 3};             // {1, 2, 3}

  vector<int> v4(v3a.begin(), v3a.end());  // {1, 2, 3}

  vector<int> v5(3);                       // {0, 0, 0}

  vector<int> v6(3, 10);                   // {1O, 10, 10}
}
