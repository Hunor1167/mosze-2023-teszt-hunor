#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hiba 1: V�ltoz�n�vben elg�pel�s, NELEMENTS helyett N_ELEMENTS
    int* b = new int[N_ELEMENTS];

    // Hiba 2: Hi�nyz� pontosvessz� a sor v�g�n
    std::cout << '1-100 ertekek duplazasa';

    // Hiba 3: Hi�nyz� pontosvessz� a sor v�g�n, �s a for ciklus felt�tele hi�nyzik
    for (int i = 0;)
    {
        b[i] = i * 2;
    }

    // Hiba 4: A m�sodik for ciklusnak helytelen a felt�tele �s hi�nyzik az inkrement�l� utas�t�s
    for (int i = 0; i; i++)
    {
        // Hiba 5: Hi�nyz� pontosvessz� a sor v�g�n
        std::cout << "Ertek:";
    }

    // Hiba 6: Hi�nyz� pontosvessz� a sor v�g�n, �s a ciklusnak 0-t�l N_ELEMENTS - 1-ig kellene sz�molnia
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // Hiba 7: Hi�nyz� pontosvessz� a sor v�g�n
        atlag += b[i]
    }

    // Hiba 8: A 'atlag' v�ltoz�t nem inicializ�lt�k, �s 0-ra kellene inicializ�lni
    int atlag;

    // Hiba 9: Hi�nyz� pontosvessz� a sor v�g�n
    atlag += b[i]

        // Hiba 10: Hi�nyz� pontosvessz� a sor v�g�n
        std::cout << "Atlag szamitasa: " << std::endl;

    atlag /= N_ELEMENTS;

    // Hiba 11: A sz�veg a string-ben id�z�jelek k�z�tt kell legyen
    std::cout << "Atlag: " << atlag << std::endl;

    // Hiba 12: Hi�nyz� 'delete' utas�t�s a mem�ria felszabad�t�s�hoz
    delete[] b;

    return 0;
}

//another comments

//another comments

//another comments


//another comments