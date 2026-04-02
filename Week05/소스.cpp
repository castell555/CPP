//heap memory : dynamic memory allocation
#include <iostream>
using namespace std;

int main() {
	int age, totalPrice=0;
	int humans = 0;
	cout << "몇 명? ";
	cin >> humans; //haep memory
	int* ages = new int[humans]; //동적메모리 할당, 메모리번지수는 포인터만 할당 

	for (int i = 0; i < humans; i++){
		cout << "나이? ";
		cin >> age;
		*(ages + i) = age;
	}
	int kid = 5000, adult = 10000, senier = 7000;
	for (int i = 0; i < humans; i++) {
		//cout << *(ages + i) << '\n';
		age = *(ages + i);
		if (age >= 65) {
			totalPrice = totalPrice + senier;
		}
		else if (age >= 19) {
			totalPrice = totalPrice + adult;
		}
		else{
			totalPrice = totalPrice + kid;
		}
	}
	cout << "총 요금 : " << totalPrice << '\n';
	delete[] ages; // free memory

	return 0;
}