#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //hianyzo alavonas "_"
    std::cout << '1-100 ertekek duplazasa' // ' helyett " es ; hiany
    for (int i = 0;) //lepeskoz es feltetel (i<N_ELEMENTS) hianyzik
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //feltetel (i<N_ELEMENTS) hianyzik
    {
        std::cout << "Ertek:" // ertekkiiras es sorzaras hianyzik
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //hianyzo ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
