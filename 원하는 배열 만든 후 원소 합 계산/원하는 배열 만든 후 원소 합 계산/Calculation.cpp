#include "main.h"
using namespace std;

void Calculation(int* ar, int* size)
{
	int sum = 0;
	int j;

	for (j = 0; j < (*size); j++)
	{
		sum += ar[j];
	}
	cout << "���ҵ��� ��: " << sum << endl;
	*size = j;
}