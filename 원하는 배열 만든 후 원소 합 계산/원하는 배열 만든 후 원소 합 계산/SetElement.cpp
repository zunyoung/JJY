#include "main.h"
using namespace std;

void SetElement(int*ar, int* size)
{
	for (int i = 0; i < (*size); i++)
	{
		ar[i] = rand() % 10;
		cout << "ar[" << i << "] = " << ar[i] << endl;
	}

	Calculation(ar, size);
}