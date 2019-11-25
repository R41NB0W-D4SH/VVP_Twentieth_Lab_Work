#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string s;
	int size;
	
	cout << "Введите строку S: ";
	cin >> s;
	
	size = s.length();
	cout << s[0];
	
	for (int i = 1; i < size; i++)
	{
		cout << " " << s[i];
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}
