#include <iostream>
#include <vector>

void print(const std::vector<int>& vec)
{
    for (const auto& e : vec)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec;

    for (unsigned int i = 1; i <= 25; ++i)
    {
        vec.push_back(i);
    }
    print(vec);

    vec.resize(100);
    print(vec);

    vec.resize(10);
    print(vec);
}
