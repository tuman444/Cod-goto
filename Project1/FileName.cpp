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

	cout << "Выберите:\n1 - для квадрата" << endl <<
		"2 - для треугольника \n3 - для ромба " << endl <<
		"4 - для прямоугольника \n";
	cin >> x1;

	switch (x1)
	{
	case 1:
	L: cout << "Введите длину и ширину сторон \n"; cin >> a1 >> b1;

		/*cout << "Введите длину сторон a1 \n";
		cin >> a1;
		cout << "Введите длину сторон b1 \n";
		cin >> b1;*/

			if (a1 == b1)
			{
				cout << "Квадрат == " << a1 * b1 << endl;
			}
			else
			{
				cout << " Введите ещё раз " << endl;
				goto L;
			}
		break;

	case 2:
		K: cout << "Введите длину стороны a1 \n";
		cin >> a1;
		cout << "Введите длину стороны b1 \n";
		cin >> b1;
		
		if (a1 != b1)
		{
			cout << "s треугольника =" << (a1 * b1) / 2 << endl;

		}
		else
		{
			cout << "Введите ещё раз " << endl;
			goto K;
		}
		break;

	case 3:
		D: cout << "Введите диагональ a1 \n";
		cin >> a1;
		cout << "Введите диагональ b1 \n";
		cin >> b1;

		if (a1 != b1)
		{
			cout << "S ромба = " << (a1 * b1) / 2 << endl;
		}
		else
		{
			cout << " Ваш ромб - квадрат \n Введите ещё раз " << endl;
			goto D;
		}
		break;

	case 4:
		cout << "Введите длину сторон a1 \n";
		cin >> a1;
		cout << "Введите длину сторон b1 \n";
		cin >> b1;

		if (a1 != b1)
		{
			
			cout << "Прямоугольник == " << a1 * b1 << endl;
		}
		else
		{
			cout << "У вас не прямоугольник " << endl;
		}
		break;

	default:
		cout << "Error \n";
		break;
	}
}