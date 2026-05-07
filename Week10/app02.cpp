#include <cstring>
#include <iostream>
using namespace std;


int main()
{
	string s1;
	s1 = "abc";
	cout << s1 << "/" << s1.size() << endl;
	cout << s1 << "/" << s1.size() << endl;
	s1 = "defghijk";
	cout << s1 << "/" << s1.size() << endl;
	cout << s1 << "/" << s1.size() << endl;
	s1 = "123456789012345";
	cout << s1 << "/" << s1.size() << endl;
	cout << s1 << "/" << s1.size() << endl;
	s1 = "1234567890123456";
	cout << s1 << "/" << s1.size() << endl;
	cout << s1 << "/" << s1.size() << endl;

	return 0;
}