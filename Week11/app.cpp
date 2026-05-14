#include<cstring>
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



	return 0;
}