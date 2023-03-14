#include <iostream>
// Ссылки - Параметры Функции 

template <typename T>// ТАК ДЕЛАТЬ НЕ НАДО
void my_swap(T num1, T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;

}

template <typename T>// Тут перредаем адреса переменных где значения меняютсяместами
void p_swap(T *num1, T *num2) {
	T tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;

}
template <typename T>
void ref_swap(T& num1, T& num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;

}

// Сылка выступает как параметры функции
int MX[10][2];// 10 рядов 20 колонки
int& func(int index) {
	return MX[index][1];
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n,m;

	//References
	//у ССЫЛОК нет разименования *
	// Ссылка не может быть направлена на другую область памяти.
	/*n = 10; m = 20;
	int &refn = n;// Ссылка асоциирующаясяс переменной n
	std::cout << "rean = " << refn << std::endl;
	refn = m;
	std::cout << "rean = " << refn << std::endl;
	std::cout << "n = " << refn << std::endl;
	*/


	// Ссылки - Параметры Функции 

	/*n = 10; m = 15;
	std::cout << n << ' ' << m << std::endl;
	//p_swap(&n, &m); // Работает но не удобно Т.к нужно передавать адреса.

	ref_swap(n, m);
	std::cout << n << ' ' << m << std::endl;
	*/

	// Сылка выступает как параметры функции

	std::cout << "Ввод в массив.\n";

	for (int i = 0; i < 10; i++) {
		std::cout << i + 1 << "-й элемент -> ";
		std::cin >> MX[i][0];
		func(i) = MX[i][0];
	}
		std::cout << "Итоговый массив: \n";
		for (int i = 0; i < 10; i++)
		std::cout << MX[i][0] << '\t' << func(i) << '\n';
	

	return 0;
}