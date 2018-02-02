#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;
//описания функций находятся после основного кода
int ShiftRight3(double *a, double *b, double * c);
int ShiftLeft3(double *a, double *b, double * c);
int IsLeapYear(unsigned int);
int MonthDays(int M, int Y);
int PrevDate(int d, int m, int y);
int NextDate(int d, int m, int y);
double f(double x, double y);
double f(double x1, double y1, double x2, double y2);
int f(int m2, int m1, int m0);
int main()
{
	setlocale(LC_ALL, "Russian");
	int  N;
	do
	{
		cout << "\t\t----Введите номер задания: ";
		cin >> N;
		cout << endl;
		switch (N)
		{
		case 1:
			/*1.Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг: значение A переходит в B,
			значение B — в C, значение C — в A (A, B, C — вещественные параметры, являющиеся одновременно входными и
			выходными). С помощью этой процедуры выполнить правый циклический сдвиг для двух данных наборов из трех чисел:
			(A1, B1, C1) и (A2, B2, C2).*/
		{
			double a1, a2, b1, b2, c1, c2;
			cout << "Введите значения A1, B1, C1: " << endl;
			cin >> a1;			
			cin >> b1;
			cin >> c1;
			cout << "Введите значения A2, B2, C2: " << endl;
			cin >> a2;
			cin >> b2;
			cin >> c2;
			ShiftRight3(&a1, &b1, &c1);
			ShiftRight3(&a2, &b2, &c2);
			cout << "Правый циклический сдвиг для A1, B1, C1: " << a1 << " " << b1 << " " << c1 << endl;
			cout << "Правый циклический сдвиг для A2, B2, C2: " << a2 << " " << b2 << " " << c2 << endl;
			cout << endl;
		}
		break;

		case 2:
			/*2.Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг: значение A переходит в C,
			значение C — в B, значение B — в A (A, B, C — вещественные параметры, являющиеся одновременно входными и
			выходными). С помощью этой процедуры выполнить левый циклический сдвиг для двух данных наборов из трех чисел:
			(A1, B1, C1) и (A2, B2, C2).*/
		{
			double a1, a2, b1, b2, c1, c2;
			cout << "Введите значения A1, B1, C1: " << endl;
			cin >> a1;
			cin >> b1;
			cin >> c1;
			cout << "Введите значения A2, B2, C2: " << endl;
			cin >> a2;
			cin >> b2;
			cin >> c2;
			ShiftLeft3(&a1, &b1, &c1);
			ShiftLeft3(&a2, &b2, &c2);
			cout << "Левый циклический сдвиг для A1, B1, C1: " << a1 << " " << b1 << " " << c1 << endl;
			cout << "Левый циклический сдвиг для A2, B2, C2: " << a2 << " " << b2 << " " << c2 << endl;
			cout << endl;
		}
		cout << endl;
		break;

		case 3:
			/*3.Описать функцию IsLeapYear(Y) логического типа, которая возвращает True, если год Y (целое положительное
			число) является високосным, и False в противном случае. Вывести значение функции IsLeapYear для пяти данных
			значений параметра Y. Високосным считается год, делящийся на 4, за исключением тех годов, которые делятся на
			100 и не делятся на 400.*/
		{
			const int size = 5;
			unsigned int y[size];
			cout << "Введите год " << endl;
			for (int i = 0; i < size; i++)
			{
				cin >> y[i];
			}
			cout << endl;
			for (int i = 0; i < size; i++)
			{
				if (IsLeapYear(y[i]) == 1)
				{
					cout << y[i] << " год - високосный" << endl;
				}
				else { cout << y[i] << " год - не високосный" << endl; }
			}

		}
		cout << endl;
		break;

		case 4:
			/*4.Используя функцию IsLeapYear из задания 3, описать функцию MonthDays(M, Y) целого типа, которая возвращает
			количество дней для M-го месяца года Y (1 ≤ M ≤ 12, Y > 0 — целые числа). Вывести значение функции MonthDays
			для данного года Y и месяцев M1, M2, M3.*/
		{
			int m[3], y;
			cout << "Введите год: ";
			cin >> y;
			cout << "Введите месяц: " << endl;
			for (int i = 0; i < 3; i++)
			{
				cin >> m[i];
			}
			cout << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << MonthDays(m[i], y) << " дней в " << m[i] << "-м месяце" << endl;
			}

		}
		cout << endl;
		break;

		case 5:
			/*5.Используя функцию MonthDays из задания 4, описать процедуру PrevDate(D, M, Y), которая по информации о
			правильной дате, включающей день D, номер месяца M и год Y, определяет предыдущую дату (параметры целого
			типа D, M, Y являются одновременно входными и выходными). Применить процедуру PrevDate к трем исходным датам
			и вывести полученные значения предыдущих дат*/
		{
			int d[3], m, y;
			cout << "Введите год: " << endl;
			cin >> y;
			cout << "Введите месяц: " << endl;
			cin >> m;
			cout << "Введите число: " << endl;
			for (int i = 0; i < 3; i++)
			{
				cin >> d[i];
			}
			cout << endl;
			for (int i = 0; i < 3; i++)
			{				
				cout << "Предыдущая дата " << PrevDate(d[i], m, y) << endl;
			}
		}
		cout << endl;
		break;

		case 6:
			/*6.Используя функцию MonthDays из задания 4, описать процедуру NextDate(D, M, Y), которая по информации о
			правильной дате, включающей день D, номер месяца M и год Y, определяет следующую дату (параметры целого
			типа D, M, Y являются одновременно входными и выходными). Применить процедуру NextDate к трем исходным датам
			и вывести полученные значения следующих дат*/
		{
			int d[3], m, y;
			cout << "Введите год: " << endl;
			cin >> y;
			cout << "Введите месяц: " << endl;
			cin >> m;
			cout << "Введите число: " << endl;
			for (int i = 0; i < 3; i++)
			{
				cin >> d[i];
			}
			cout << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << "Следующая дата: " << NextDate(d[i], m, y) << endl;
			}
		}
		cout << endl;
		break;

		case 7:
			/*7.Используя функцию Dist из задания Proc59, описать процедуру Altitudes(xA, yA, xB, yB, xC, yC, hA, hB, hC),
			находящую высоты hA, hB, hC треугольника ABC (выходные параметры), проведенные соответственно из вершин
			A, B, C (их координаты являются входными параметрами). С помощью этой процедуры найти высоты треугольников ABC,
			ABD, ACD, если даны координаты точек A, B, C, D.*/
		{

			cout << "Вы сказали пропустить" << endl;

		}
		cout << endl;
		break;

		case 8:
			/*8.Определите функцию double f(double x, double y), которая вычисляет и возвращает длину гипотенузы
			прямоугольного треугольника, две другие стороны x и y которого известны*/
		{
			double x, y, z;
			cout << "Введите сторону х: ";
			cin >> x;
			cout << "Введите сторону y: ";
			cin >> y;
			z = f(x, y);
			cout << "Длинa гипотенузы прямоугольного треугольника = " << z << endl;
		}
		cout << endl;
		break;

		case 9:
			/*9.Напишите функцию double f(double x1, double y1, double x2, double y2), которая вычисляет расстояние между
			двумя точками (xl, yl) и (x2, y2)*/
		{
			double d, x1, y1, x2, y2;
			cout << "Введите координаты точек: ";
			cin >> x1 >> y1 >> x2 >> y2;
			d = f(x1, y1, x2, y2);
			cout << "Расстояние между точками (" << x1 << "," << y1 << ") и (" << x2 << "," << y2 << ") = " << d << endl;
		}
		cout << endl;
		break;

		case 10:
			/*10.Напишите функцию int f(int m2, int m1, int m0), которая вычисляет и возвращает натуральное число,
			первая (сотни), вторая (десятки) и третья (единицы) цифры которого равны соответственно m2, m1, m0*/
		{
			int m2, m1, m0, m;
			cout << "Введите числа: ";
			cin >> m2 >> m1 >> m0;
			m = f(m2, m1, m0);
			cout << "Число состоящие из " << m2 << " , " << m1 << " и " << m0 << " - " << m << endl;
		}
		break;
		default: {cout << "Задания с таким номером не существует" << endl; }
		}
	} while (N > 0 && N < 11);
	cout << "\t\t\t\t\tКОНЕЦ." << endl;
	system("pause");
}

/*l задача*/
int ShiftRight3(double *a, double *b, double * c)
{
	double temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
	return 0;
}
/*2 задача*/
int ShiftLeft3(double *a, double *b, double * c)
{
	double temp = *c;
	*c = *a;
	*a = *b;
	*b = temp;
	return 0;
}

/*3 задача*/
int IsLeapYear(unsigned int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
/*4 задача*/
int MonthDays(int m, int y)
{
	switch (m)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12: { return 31; }
	case 4:case 6:case 9:case 11: { return 30; }
	case 2: {if (IsLeapYear(y) == 1) { return 29; } else return 28; }
	}
}

/*5задача*/
int PrevDate(int d, int m, int y)
{
	if (d == 1)
		switch (m)
		{
		case 3: {return MonthDays(2, y); }
		case 5: case 7:case 10:case 12: {return 30; }
		case 1:case 2:case 4:case 6:case 8:case 9:case 11: {return 31; }
		}
	else { return d - 1; }
}

/*6 задача*/
int NextDate(int d, int m, int y)
{
	int cdate;
	switch (m)
	{
	case 2: {cdate = MonthDays(2, y); break; }
	case 4: case 6:case 9:case 11: {cdate = 30; break; }
	case 1:case 3:case 5:case 7:case 8:case 10:case 12: {cdate = 31; break; }
	}
	if (d >= cdate) { return 1; }
	else  { return d + 1; }
}

/*8 задача*/
double f(double x, double y)
{
	double f = sqrt((x*x) + (y*y));
	return f;
}

/*9 задача*/
double f(double x1, double y1, double x2, double y2)
{
	double f = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	return f;
}

/*10 задача*/
int f(int m2, int m1, int m0)
{
	int f = m2 * 100 + m1 * 10 + m0;
	return f;
}