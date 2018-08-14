#include "main.h"

void MakeArray(int* size)
{
	int* ar = (int*)malloc(sizeof(int) * (*size));

	SetElement(ar,size);
}