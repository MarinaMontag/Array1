// Array104.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дан массив размера N и два целых числа K и M (1 ≤ K ≤ N, 1 ≤ M ≤ 10). Перед элементом массива с номером K 
//вставить M новых эле-ментов с нулевыми значениями.

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, k, m, h = 0;
	cin >> n >> k >> m;
	int a[10];
	int i;
	for (i = 0; i < n; i++)
		cin >> a[i];
	n = n + m;
	for (i = 0; i < k; ++i)
		cout << a[i] << " ";
	for (i = k; i < k + m; i++) {
		
		cout << h << " ";
	}
	
	for (i = k; i < n-m; i++){
		
		cout << a[i] << " ";
	}
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
