#include <iostream>
#include <vector>

// std::vector<double> wczyt()

void funkcja()
{
    std::cout << "dupa" << std::endl;
}

int main()
{
    int *tab[5];

    int a = 5;
    tab[0] = &a;

    std::cout << tab[0] << std::endl;
    std::cout << *tab[0] << std::endl;

    std::string taba[10];

    std::cout << (void *)funkcja << "   " << funkcja;

    return 0;
}