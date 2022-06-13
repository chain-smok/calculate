#include <iostream>
using namespace std;

int insertionSort(int [], int);


int main()
{

	int *ptr;//宣告指標ptr
	int size;//宣告陣列大小

	cout << "arraysize:";
	cin >> size;//輸入陣列大小

	ptr = new int [size];//建立動態記憶體陣列

	for (int i = 0; i < size; i++)
	{
		cin >> *(ptr + i);//輸入陣列中的資料
	}

	cout << "Before sort:" << endl;

	for (int j = 0; j < size; j++)
	{
		cout << *(ptr + j)<<" ";//印出陣列中的資料
	}

	cout << endl;

	insertionSort(ptr, size);
    return 1;
	cout << "After sort:" << endl;

	for (int k = 0; k < size; k++)
	{
		cout << *(ptr + k) << " ";//印出排序後的陣列中的資料
	}
	system("pause");
	return 0;
}

int insertionSort(int a[], int arraySize)
{
	int temp = 0;
	int next = 0;
	
	for (int i = 1; i < arraySize; i++)
	{
		temp = a[i];//未排序中要拿來排的值
		next = i;//在已排序中最後一個數值的位置

		while ((next>0) && (a[next-1]>temp))//在已排序中的第一個位置要大於零 且 已排序中的值要比 未排序中要拿來比較的值大
		{
			a[next] = a[next - 1];
			next--;
		}

		a[next] = temp;//將未排序中要拿來排的值插入到排序中的元素當中比他小或是等於他的值後面

	}
	return *a;
}