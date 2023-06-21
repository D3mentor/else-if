#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float n;

	cout << "Введите оператора для выполнения ";
	cin >> n;

	if (n < 10)
	{
		cout << "Это число меньше 10" << endl;
	}
	else
	{
		if (n == 10)
		{
			cout << "Это число 10" << endl;
		}
		else
		{
			cout << "Это число больше 10" << endl;
		}
	}
	return 0;

}