#include "main.h"
using namespace std;

void InputSize(int* size)
{
	int siz;

	cout << "원하는 배열의 크기: ";
	cin >> siz;
	cout << siz << "의 크기를 가진 배열 확인" << endl;
	*size = siz;
}