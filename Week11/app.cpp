#include<string>
#include<iostream>
#include <iomanip>
using namespace std;

int main() {
	string s1("abc");
	string s2 = ("abc");
	cout << (s1 == s2) << endl;
	cout << boolalpha << (s1 == s2) << endl;
	cout << (s1 == s2) << endl;
	cout << noboolalpha;
	cout << (s1 == s2) << endl;

	cin >> s2;
	cout << s2 << endl;
	//getline(cin, s2, ' ');
	//남아있는 더미값을 제거하기 위해 버퍼를 비워야 한다
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(cin, s2);
	cout << s2 << endl;

	return 0;
}