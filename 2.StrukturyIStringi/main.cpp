#include <iostream>

// using namespace std;

void test(int a)
{
    std::cout << a << std::endl;
}

void test(char a)
{
    std::cout << a << std::endl;
}

int main()
{
    int wypisywana = 65;

    test((char)wypisywana);
    test(wypisywana);

    std::cout << sizeof(int);

    return 0;
}