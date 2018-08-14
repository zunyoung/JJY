#include <stdlib.h>
#include "main.h"
using namespace std;

//void InputSize(int* size)
//{
//		int siz;
//
//		cout << "원하는 배열의 크기: ";
//		cin >> siz;
//		cout << siz << "의 크기를 가진 배열 확인" << endl;
//		*size = siz;
//}
//
//void MakeArray(int* size)
//{
//	int* ar = (int*)malloc(sizeof(int) * (*size));
//
//}
//
//void SetElement(int*ar, int* size)
//{
//	for (int i = 0; i < (*size); i++)
//	{
//		ar[i] = rand() % 10;
//		cout << "ar[" << i << "] = " << ar[i] << endl;
//	}
//
//}
//
//void Calculation(int* ar, int* size)
//{
//	int sum = 0;
//	int j;
//
//	for (j = 0; j < (*size); j++)
//	{
//		sum += ar[j];
//	}
//	cout << "원소들의 합: " << sum << endl;
//	*size = j;
//}

int main()
{
	// 사용자로부터 배열의 크기를 입력받는다.
	int size;
	InputSize(&size);

	// 입력받은 크기 만큼의 int의 배열을 만든다.

	MakeArray(&size);

	// 배열의 각 원소를 0~9 사이의 값으로 채운다.
	// 배열의 각 원소의 값의 합계를 구한다.

	return 0;
}
