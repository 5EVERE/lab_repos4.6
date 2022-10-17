#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double P, S;
	int j, i;

	
	P = 1;
	j = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{
			S += pow(i, 2);
			i++;
		} while (i <= pow(j, 2));
		P *= sqrt(S);
		j++;
	} while (j <= 15);
	cout << "1) " << P << endl;
	P = 1;
	j = 1;
	while (j <= 15)

	{
		S = 0;
		i = 1;
		while (i <= pow(j, 2))

		{
			S += pow(i, 2);
			i++;

		}
		P *= sqrt(S);
		j++;

	}
	cout << "2) " << P << endl;

	P = 1;
	for (j = 1; j <= 15; j++)

	{
		S = 0;
		for (i = 1; i <= pow(j, 2); i++)
		{
			S += pow(i, 2);
		}
		P *= sqrt(S);

	}
	cout << "3) " << P << endl;

	P = 1;
	for (j = 15; j >= 1; j--)
	{
		S = 0;
		for (i = pow(j, 2); i >= 1; i--)
		{
			S += pow(i, 2);
		}
		P *= sqrt(S);
	}
	cout << "4) " << P << endl;
	return 0;
}