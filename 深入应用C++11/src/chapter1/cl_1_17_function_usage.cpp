#include <iostream>
#include <functional>

void func(void)
{
    std::cout << "func()" << std::endl;
}

class Foo
{
public:
    static int foo_func(int a)
    {
        std::cout << "foo_func()" << std::endl;
        return a;
    }    
};

class Bar
{
public:
    int operator()(int a)
    {
        std::cout << "Bar::operator()" << std::endl;
        return a;
    }
};

int main()
{
    std::function<void(void)> f1 = func;
    f1();

    std::function<int(int)> f2 = Foo::foo_func;
    std::cout << f2(123) << std::endl;

    Bar bar;
    f2 = bar;
    std::cout << f2(123) << std::endl;

    return 0;
}