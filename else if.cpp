#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float n;

	cout << "������� ��������� ��� ���������� ";
	cin >> n;

	if (n < 10)
	{
		cout << "��� ����� ������ 10" << endl;
	}
	else
	{
		if (n == 10)
		{
			cout << "��� ����� 10" << endl;
		}
		else
		{
			cout << "��� ����� ������ 10" << endl;
		}
	}
	return 0;

}