#include <stdlib.h>
#include "main.h"
using namespace std;

//void InputSize(int* size)
//{
//		int siz;
//
//		cout << "���ϴ� �迭�� ũ��: ";
//		cin >> siz;
//		cout << siz << "�� ũ�⸦ ���� �迭 Ȯ��" << endl;
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
//	cout << "���ҵ��� ��: " << sum << endl;
//	*size = j;
//}

int main()
{
	// ����ڷκ��� �迭�� ũ�⸦ �Է¹޴´�.
	int size;
	InputSize(&size);

	// �Է¹��� ũ�� ��ŭ�� int�� �迭�� �����.

	MakeArray(&size);

	// �迭�� �� ���Ҹ� 0~9 ������ ������ ä���.
	// �迭�� �� ������ ���� �հ踦 ���Ѵ�.

	return 0;
}
