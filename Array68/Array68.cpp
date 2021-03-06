// Array68.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дан массив размера N. Поменять местами его минимальный и максимальный элементы.

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int n;
	int a[10], min=0, max=0;
	int i;
	cin >> n;
	for ( i = 0; i < n; i++)
		cin>> a[i];
	for (i = 0; i < n; i++) {
		if (a[i] < a[min])min = i;
		if (a[i] > a[max])max = i;
	}
	if (max != min) {
		a[max] = a[max] + a[min];
		a[min] = a[max] - a[min];
		a[max] = a[max] - a[min];
	}
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
