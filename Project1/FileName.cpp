#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a1, b1, c1, d1;
	int x1;

	cout << "��������:\n1 - ��� ��������" << endl <<
		"2 - ��� ������������ \n3 - ��� ����� " << endl <<
		"4 - ��� �������������� \n";
	cin >> x1;

	switch (x1)
	{
	case 1:
	L: cout << "������� ����� � ������ ������ \n"; cin >> a1 >> b1;

		/*cout << "������� ����� ������ a1 \n";
		cin >> a1;
		cout << "������� ����� ������ b1 \n";
		cin >> b1;*/

			if (a1 == b1)
			{
				cout << "������� == " << a1 * b1 << endl;
			}
			else
			{
				cout << " ������� ��� ��� " << endl;
				goto L;
			}
		break;

	case 2:
		K: cout << "������� ����� ������� a1 \n";
		cin >> a1;
		cout << "������� ����� ������� b1 \n";
		cin >> b1;
		
		if (a1 != b1)
		{
			cout << "s ������������ =" << (a1 * b1) / 2 << endl;

		}
		else
		{
			cout << "������� ��� ��� " << endl;
			goto K;
		}
		break;

	case 3:
		D: cout << "������� ��������� a1 \n";
		cin >> a1;
		cout << "������� ��������� b1 \n";
		cin >> b1;

		if (a1 != b1)
		{
			cout << "S ����� = " << (a1 * b1) / 2 << endl;
		}
		else
		{
			cout << " ��� ���� - ������� \n ������� ��� ��� " << endl;
			goto D;
		}
		break;

	case 4:
		cout << "������� ����� ������ a1 \n";
		cin >> a1;
		cout << "������� ����� ������ b1 \n";
		cin >> b1;

		if (a1 != b1)
		{
			
			cout << "������������� == " << a1 * b1 << endl;
		}
		else
		{
			cout << "� ��� �� ������������� " << endl;
		}
		break;

	default:
		cout << "Error \n";
		break;
	}
}