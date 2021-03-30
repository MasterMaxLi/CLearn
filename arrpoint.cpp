#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 1,3,5,7,9 };
	int* p = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << *p << "\t";
		p++;
	}
	return 0;
}