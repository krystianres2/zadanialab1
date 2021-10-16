// zadanie3lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Podaj a: ", cin >> a;
	cout << "Podaj b: ", cin >> b;
	 
	if (a == b) {
		cout << "LIczby sa rowne \n";
	}
	else if (a > b)
		cout << "a jest wieksze" << endl;
	else if (a < b)
		cout << "b jest wieksze\n";

}
