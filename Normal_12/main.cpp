#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <memory> 
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <set>
#include <thread> 
#include <chrono> 
#include <algorithm>
#include <numeric>
#include <mutex>
using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	int size;
	int r_size = 0;
	cout << "Введите размер массива: ";
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}


	cout << endl << "array =  ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 1)
		{
			r_size++;
		}
	}

	int* result = new int[r_size];
	int j = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 1)
		{
			result[j] = arr[i];
			j++;
		}
	}


	cout << endl << "Result =  ";
	for (int i = 0; i < r_size; i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
	delete[] arr;
	delete[] result;

	system("pause");
	return 0;
}
