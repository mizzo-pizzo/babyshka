#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	//диапазон от -20 до 20
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 41 - 20;
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	//Array1. Дано целое число N (> 0). Сформировать и вывести целочисленный
	//массив размера N, содержащий N первых положительных нечетных чисел :
//	1, 3, 5, . . . .
	/*const int n = 10;
	int mas[n];
	mas[0] = 1;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + 2;
		cout << mas[i] << ' ';
	}*/
	//Array2. Дано целое число N (> 0). Сформировать и вывести целочисленный
	//массив размера N, содержащий степени двойки от первой до N - й: 2, 4,
	//	8, 16, . . . .
	/*const int n = 10;
	int mas[n];
	mas[0] = 2;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * 2;
		cout << mas[i] << ' ';
	}*/
	//Array3.Дано целое число N(> 1), а также первый член A и разность D арифметической прогрессии.Сформировать и вывести массив размера N,
	//содержащий N первых членов данной прогрессии :
	//A, A + D, A + 2·D, A + 3·D, . . . .
	/*const int n = 10;
	int mas[n];
	int a, d;
	cin >> a >> d;
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + d;
		cout << mas[i] << ' ';
	}*/
	//Array4.Дано целое число N(> 1), а также первый член A и знаменатель D
	//геометрической прогрессии.Сформировать и вывести массив размера N,
	//содержащий N первых членов данной прогрессии :
	//A, A·D, A·D2
	//	, A·D
	//	3
	//	, . . . .
	/*const int n = 10;
	int mas[n];
	int a, d;
	cin >> a >> d;
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * d;
		cout << mas[i] << ' ';
	}*/
	//Array5. Дано целое число N (> 2). Сформировать и вывести целочисленный
	//массив размера N, содержащий N первых элементов последовательности
	//	чисел Фибоначчи FK :
	//F1 = 1, F2 = 1, FK = FK−2 + FK−1, K = 3, 4, . . . .
	/*const int n = 10;
	int mas[n];
	int a, d;
	cin >> a >> d;
	mas[1] = a;
	cout << mas[1] << ' ';
	for (int i = 2; i < n; i++) {
		mas[i] = mas[i - 2] + d;
		cout << mas[i] << ' ';
	}*/
	//Array7.Дан массив размера N.Вывести его элементы в обратном порядке.
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21 + -20;
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	 //Array8. Дан целочисленный массив размера N. Вывести все содержащиеся в
	//данном массиве нечетные числа в порядке возрастания их индексов, а
	//	также их количество K.
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		for (i % 2 == 0 || i % 3 == 1;) {
			i++;
		}
		mas[i] = rand() % 21 + -20;
		cout << mas[i] << ' ';
	}
	cout << endl; */
}