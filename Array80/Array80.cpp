// Array80.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дан массив размера N. Осуществить сдвиг элементов массива влево на одну позицию 
//(при этом AN перейдет в AN–1, AN–1 — в AN–2, …, A2 — в A1, a исходное значение первого элемента будет потеряно).
//Последний эле-мент полученного массива положить равным 0.

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[10];
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int i=0;
	while(i!=(n-1)){
		a[i] = a[i + 1];
		cout << a[i] << " ";
		i++;
	}
	a[n - 1] = 0;
	cout << a[n - 1];
	return 0;
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
