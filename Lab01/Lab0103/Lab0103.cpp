// Lab0103.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a;
	double b = 1/2;
	cout << "b is " << b << endl;
	b = 1. / 2;
	cout << "b is " << b << endl;
	cout << "Enter a \n";
	cin >> a;
	//змінна а має містити натуральне число:
	if (a > 0) {
		double h = 0, S = 0, R = 0, r = 0; //введення змінних
		h = sqrt(pow(a, 2) - (pow(1. / 2 * a, 2)));//формула висоти в рівностороньому трикутнику
		S = ((1. / 2) * a * h);//формула площі рівносторонього трикутника
		R = a / sqrt(3);//радіус описаного кола
		r = a / (2 * sqrt(3));//радіус вписаного кола
		//виведення даних:
		cout << "S is " << S << endl;
		cout << "R is " << R << endl;
		cout << "r is " << r << endl;
		cout << "h is " << h << endl;
	}
	else {
		cout << "Error\n";
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
