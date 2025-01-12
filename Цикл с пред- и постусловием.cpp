#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main() {

	setlocale(LC_ALL, "Russian");

	double L[10] = { 0.05, 0.06, 0.07, 0.08, 0.09, 0.1, 0.2, 0.3, 0.4, 0.5 };
	double T[10];
	double C;

	double PI = 3.141592653589793;

	int R = 1530;

	int i = 0;

	cout << "Цикл с предусловием" << endl;

		while (i < 10)
		{
			C = 0.81 * pow ( 10, -7 );

			T[i] = 2000 * PI / sqrt ( 1 / ( L[i] * C ) - pow ( ( R / (2 * L[i] ) ), 2 ) );

			cout << L[i] << "     " << T[i] << endl;

			i++;
		}

		i = 0;

		C = 0;
				
	cout << "Цикл с постусловием" << endl;

		 do
		 {
			C = 0.81 * pow(10, -7);

			T[i] = 2000 * PI / sqrt(1 / (L[i] * C) - pow((R / (2 * L[i])), 2));

			cout << L[i] << "     " << T[i] << endl;

			i++;

		 } while (i < 10);
	


		 return 0;



}