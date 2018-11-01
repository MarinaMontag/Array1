// Array128.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дан целочисленный массив размера N. Преобразовать массив, увели-чив его первую серию наибольшей длины на один элемент.

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, i ;
     
	cin >> n;
	int a[20];
	
	for (i = 0; i < n; i++)
		cin >> a[i];
	int len = 1, maxlen = 1, end_of_maxseries = 1;//end_of_maxseries-номер последнего элемента в максимальной серии
	for (i = 1; i < n; i++) {
		if (a[i - 1] != a[i]) {//если предведущий элемент не равен следующему, тогда длина серии равна нулю,
			if (len > maxlen) {// но после выхода выхода из if прибавляется 1, потому в конце первого прохода по циклу
				maxlen = len;//длина в любом случае равна 1.
				end_of_maxseries = i - 1;//поскольку мы перешли на элемент, который не равен предведущему,
			}//номер последнего елемента в максимальной серии будет равняться номеру предведущего элемента
			len = 0;//после присвоения значения len значению maxlen длинна обнуляется
		}
		len++;
	}
	if (len > maxlen) {
		maxlen = len;
		end_of_maxseries = i-1;//необходимо что бы номер элемента не был последним в массиве, ибо мы будем прибавлять 
	}//еще один элемент
	for (i = ++n-1; i > end_of_maxseries; --i)//++n-1 значит что мы прибавили еще один элемент к массиву 
		a[i] = a[i - 1];
	for (i = 0; i < n; i++)
		cout<< a[i]<<" ";
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
