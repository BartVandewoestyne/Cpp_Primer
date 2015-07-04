#include <forward_list>
#include <iostream>
#include <string>

using namespace std;

void string_insert(std::forward_list<string>& flst, const std::string& s1, const std::string& s2)
{
    for (auto it = flst.begin(); it != flst.end(); ++it)
    {
        if (*it == s1)
        {
            flst.insert_after(it, s2);
        }
    }
}

int main()
{
    forward_list<std::string> flst = {"Foo", "Bar", "Baz"};
    string_insert(flst, "Bar", "Test");

    for (auto i : flst)
    {
        std::cout << i << std::endl;
    }
}
