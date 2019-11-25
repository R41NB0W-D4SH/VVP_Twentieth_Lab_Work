#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string s;
	char c;
	
	cout << "Введите какую-нибудь строку: ";
	getline(cin, s);

	cout << "Введите символ C: ";
	cin >> c;
	
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == c)
		{
			cout << s[i] << s[i];
		}
		else 
		{
			cout << s[i];
		}
	}
	
	system("pause");
	return 0;
}
