// zadanie5lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float a, b;
    int wybor;

    cout << "Podaj 1 liczbe: ", cin >> a;
    cout << "Podaj 2 liczbe: ", cin >> b;

    cout << "1.Suma   2.Roznica   3.Iloczyn   4.Iloraz"<<endl;
    cout << "Wybierz: ";
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        cout << "Suma = " << a + b;
        break;
    case 2:
        cout << "Roznica = " << a - b;
        break;
    case 3:
        cout << "Iloczyn = " << a * b;
        break;
    case 4:
        if (b == 0) cout << "nie dzieli sie przez 0";
        else
        cout << "Iloraz = " << a / b;
    }
	


}

