#include <iostream>
#include <iomanip>
#include <fstream>

int main()
{
    std::cout << std::hexfloat << 12.4 << std::endl;

    std::ofstream plik;
    plik.open("test_wyjscia.txt");

    if (plik)
    {
        plik << "aaaaaaa";
        std::exit;
        std::abort;
        std::terminate;
        plik.close();
    }

    return 0;
}