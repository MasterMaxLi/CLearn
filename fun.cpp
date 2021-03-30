#include<iostream>
using namespace std;

int* bubble_sort(int* arr, int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}

void print_array(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = { 1, 20, 2, 30, 4, 15, 8, 17, 22, 36, 9 };
	int length = sizeof(arr) / sizeof(arr[0]);
	//print_array(bubble_sort(arr, length), length);

	int *arr2 = bubble_sort(arr, length);
	print_array(arr2, length);
	return 0;
}