#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	char c;
	
	cout << "Введите символ C: ";
	cin >> c;
	
	cout << "Символ прешествующий C: " << char(int(c) - 1) << endl;
	cout << "Символ следующий за C: " << char(int(c) + 1) << endl;
	
	system("pause");
	return 0;
}
