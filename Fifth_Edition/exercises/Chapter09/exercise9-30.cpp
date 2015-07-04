/*
 * If the container holds elements of a class type and resize adds elements,
 * we must supply an initializer or the element type must have a default constructor.
 */

#include <iostream>
#include <vector>

struct Foo
{
    Foo()
    {
        std::cout << "Foo()" << std::endl;
    }
};

struct Bar
{
    Bar() = delete;
};

int main()
{
    // This is fine.
    std::vector<Foo> vf;
    vf.resize(5);

    // This does not compile since Bar has no default constructor.
    //std::vector<Bar> vb;
    //vb.resize(5);
}
