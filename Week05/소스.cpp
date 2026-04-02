//heap memory : dynamic memory allocation
#include <iostream>
using namespace std;

int main() {
	/*int humans = 0;
	int ages[humans];*/

	int age;
	//int* a = &age; 포인터 변수는 메모리 번지 주소만을 찾는다


	int humans = 0;
	cout << "몇 명? ";
	cin >> humans; //haep memory
	int* ages = new int[humans]; //동적메모리 할당, 메모리번지수는 포인터만 할당 

	for (int i = 0; i < humans; i++){
		cout << "나이? ";
		cin >> age;
		*(ages + i) = age;
	}
	for (int i = 0; i < humans; i++) {
		cout << *(ages + i) << '\n';
	}

	/*cout << ages << '\n';
	cout << &humans << '\n';
	cout << &age << '\n';*/

	delete[] ages; // free memory

	return 0;
}