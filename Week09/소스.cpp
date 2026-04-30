#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char lines[80];
	cout << "input : ";
	cin.getline(lines, 80);
	//cin >> lines; // adc zxy (엔터키가 구분자)
	cout << endl;
	cout << "Output: " << endl;
	cout << lines << endl; //abc (스페이스바, 엔터키, 탭키는 모두 구분자

	return 0;
}