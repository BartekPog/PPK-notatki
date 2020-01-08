#include <iostream>

using namespace std;

///                       FUNKCJE
/*
Jak wyglada funkcja:
    [typ funkcji] [identyfikator] ([parametry])
    {
        [cialo funkcji]
    }

    LUB

    auto [identyfikator] ([parametry]) -> int
    {
        [cialo funkcji]
    }

    można pominąć "-> int" jeśli zmienna przy return może być jednoznacznie interpretowana przez kompilator

    można funkcję najpierw zadeklarowac a dopiero potem dodać ciało 
        jeśli zapomnimy -> błąd undefined reference!



Działanie funkcji:
    odłożenie na stosie miejsca na odpowiedni typ danych
    zapisanie na stosie adresu powrotu funkcji
    parametry są zapisane (w c++ od prawej strony) na stosie
        są kopiowane (poza tablicami, one standardowo przez adres)

    skok do operacji funkcji

    return - wartość jest kopieowana do utrzymywacza przestrzeni
    stos funkcji jest usuwany


Doxygen: 
        funkcja zwracająca [coś]
        @param a mnożnik
        @param b mnożnik
        @return iloczyn mnożników a i b -kjasdhaskjdsh
    
    mamy robić dokumentację w latex!



Przekazywanie przez referencję:
    w parametrach:
        const int & [nazwaZmiennej]

    wykorzystywane kiedy chcemy korzystć z dostępu do ogromnej zmniennej wewnątrz naszej funkcji

    ewentualnie bez const - wtedy kiedy chcemi modyfikować wiele zmiennych jedną funkcją



stałe (const a constexpr):
    const można zainicjować liczbą losową
        nie można inicjować tablicy stałą losowo inicjowaną!
    
    constexpr - musi być "stała" już podczas kompilacji!!
        DODATKOWO - nie może być zainicjowana wartością zwracaną z funkcji
        ALE można przy typie funkcji napisać constexpr i działa 
        PRZYKŁAD NIŻEJ
    

funkcja inline:
    inne funkcje psują potok programów poprzez skoki (rozkaz CALL)

    trywialne funkcje możemy próbwac wykonywać bez skoku za pomocą słowa kluczowego "inline" - ale w sumie nie trzeba bo kompilatory robią to i tak xdd



przekazywanie tablic:
    standardowo można bez podania jednego wymiaru - i tak działa

    tablice przekazywane są przez referencję! (zmienna "tab" jest tylko wskaźnikiem na pierwszy element)



funkcja main:
    może nie mieć:
        brak parametrów 
        (int ile, char * params[])
    
    char * - napis w stylu c

    ZAWSZE pierwszym parametrem maina jest nazwa pliku wykonywanego
    można dawać inne w konsoli przy wykonaniu i z nich korzystać

    echo $0 pokazuje co ostatnio wykonał program 

    po wykonaniu maina na stosie pozostaje 0 (jeśli wszystko poszło ok


    
vector:
    definicja:    
        tablica o zmiennym rozmairze
    
    używanie:   
        std::vector <int> tablica;     <- deklaracja
        tablica.push_back(12);         <- dodaj na końcu element 12
    
    inne: 
        .size()                     ilość elem
        .capacity()                 max ilość elementów bez relokacji - zwiększana zawsze dwukrotnie
        .insert(position, value)    wstawianie elementu na wybraną pozycję
        .pop_back()                 usunięcie elementu z końca, zwraca void
        .back()                     zwraca ostatni element ?? <- przetestować       

    uwaga!
        vector też nie sprawdza wylotu poza zakres  
        std::size_t - typ który na pewno zmieści wszystkie indeksy tablicy

    iterator tablicy:
        for (auto el : tablica)
            cout<<el<<endl;



Sidenotes:
    lepszy rand std::default_rand_engine
    w standardzie C11 nie można używać ifa w funkcjach constexpr!
        ale można robić operator ( ? : )
*/

//w tej funkcji parametr i musi być znany w czasie kompilacji
constexpr unsigned long long int silnia(unsigned int i)
{
    return i < 2 ? 1 : i * silnia(i - 1);
}

void zwiekszRoznice(int &a, int &b)
{
    a--;
    b++;
}

int main()
{
    int a = 1, b = 2;
    cout << a << "  " << b << endl;

    zwiekszRoznice(a, b);
    cout << a << "  " << b << endl;

    cout << silnia(4) << endl;

    return 0;
}