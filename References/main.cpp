#include <iostream>
// ������ - ��������� ������� 

template <typename T>// ��� ������ �� ����
void my_swap(T num1, T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;

}

template <typename T>// ��� ��������� ������ ���������� ��� �������� ���������������
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

// ����� ��������� ��� ��������� �������
int MX[10][2];// 10 ����� 20 �������
int& func(int index) {
	return MX[index][1];
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n,m;

	//References
	//� ������ ��� ������������� *
	// ������ �� ����� ���� ���������� �� ������ ������� ������.
	/*n = 10; m = 20;
	int &refn = n;// ������ ��������������� ���������� n
	std::cout << "rean = " << refn << std::endl;
	refn = m;
	std::cout << "rean = " << refn << std::endl;
	std::cout << "n = " << refn << std::endl;
	*/


	// ������ - ��������� ������� 

	/*n = 10; m = 15;
	std::cout << n << ' ' << m << std::endl;
	//p_swap(&n, &m); // �������� �� �� ������ �.� ����� ���������� ������.

	ref_swap(n, m);
	std::cout << n << ' ' << m << std::endl;
	*/

	// ����� ��������� ��� ��������� �������

	std::cout << "���� � ������.\n";

	for (int i = 0; i < 10; i++) {
		std::cout << i + 1 << "-� ������� -> ";
		std::cin >> MX[i][0];
		func(i) = MX[i][0];
	}
		std::cout << "�������� ������: \n";
		for (int i = 0; i < 10; i++)
		std::cout << MX[i][0] << '\t' << func(i) << '\n';
	

	return 0;
}