#include<iostream>
using namespace std;

int main() {
	int columns = 0;
	int* arr[3];
	cin >> columns;
	
	for (int i = 0; i < 3; i++)
	{
		arr[i] = new int[columns]; //heap memory
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = i * j;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
	for (int i = 0; i < 3; i++)
	{
		delete arr[i];
		arr[i] = nullptr;
	}

	return 0;
}