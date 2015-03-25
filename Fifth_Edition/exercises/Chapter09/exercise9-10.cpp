// TODO: with g++ 4.8.2 I get the following error when compiling:
//
//  error: inconsistent deduction for ‘auto’: ‘__gnu_cxx::__normal_iterator<int*, std::vector<int> >’ and then ‘__gnu_cxx::__normal_iterator<const int*, std::vector<int> >’
//
// with clang online at http://coliru.stacked-crooked.com/ I get
//
//   error: 'auto' deduced as '__gnu_cxx::__normal_iterator<int *, std::vector<int, std::allocator<int> > >' in declaration of 'it1' and deduced as '__gnu_cxx::__normal_iterator<const int *, std::vector<int, std::allocator<int> > >' in declaration of 'it2'
//
// I think this code is in error.


#include <vector>

using std::vector;

int main()
{
    vector<int> v1;
    const vector<int> v2;

    // it1: vector<int>::iterator
    // it2: vector<int>::const_iterator
    // it3: vector<int>::const_iterator
    // it4: vector<int>::const_iterator
    auto it1 = v1.begin(), it2 = v2.begin();
    auto it3 = v1.cbegin(), it4 = v2.cbegin();
}
