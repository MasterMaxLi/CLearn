#include <iostream>
#include <string>

int* arr_sort(int* arr, int length);

int main()
{
    /*std::cout << "short的最大值为" << SHRT_MAX << std::endl;
    std::cout << "short的最小值为" << SHRT_MIN << std::endl;

    std::cout << "int的最大值为" << INT_MAX << std::endl;
    std::cout << "int的最小值为" << INT_MIN << std::endl;

    std::cout << "long的最大值为" << LONG_MAX << std::endl;
    std::cout << "long的最小值为" << LONG_MIN << std::endl;

    std::cout << "long long的最大值为" << LLONG_MAX << std::endl;
    std::cout << "long long的最小值为" << LLONG_MIN << std::endl;

    char ch[] = "hello world";
    std::cout << ch << std::endl;
    std::string str = "hello world";
    std::cout << str << std::endl;
    char ch1[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
    std::cout << ch1 << std::endl;
    std::cout << "ch1的长度为" << sizeof(ch1) / sizeof(char) << std::endl;
    std::cout << "str的长度为" << str.length() << std::endl;

    int* arr = new int[5]{ 1, 19, 3, 27, 5 };
    for (int i = 0; i < 5; i++)
    {
        std::cout << "arr[" << i << "]=" << arr_sort(arr, 5)[i] << std::endl;
    }
    delete[] arr;*/

    char ch[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
    std::string str = ch;
    std::cout << "ch的长度为" << sizeof(ch) / sizeof(char) << std::endl;
    std::cout << "str的长度为" << str.length() << std::endl;
    return 0;
}

int* arr_sort(int* arr, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int temp = 0;
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}
