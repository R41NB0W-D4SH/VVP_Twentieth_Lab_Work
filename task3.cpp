#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int k=0;
	string line;
	
	cout << "Введите строку с прописными латинскими буквами: ";
	getline(cin, line);

	for (int i = 0; i < line.length(); i++)
	{
		if (isupper(line[i]))
		{
			k++;
		}
	}

	cout << "Кол-во прописных латинских букв: " << k;
	
	system("pause");
	return 0;
