#include <iostream>
#include <vector>

using std::endl;
using std::vector;
using std::cout;

int main()
{
  vector<int> v1 = {1, 2, 3};
  vector<int> v2 = {3, 4, 5};

  if (v1 == v2) {
    cout << "Vectors are equal!" << endl;
  } else {
    cout << "Vectors are not equal!" << endl;
  }
}
