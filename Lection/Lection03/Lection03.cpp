﻿// Lection03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int a;
    scanf_s("%d", &a);
    char* pc; /*вказівник на дані з типом char */
    unsigned* p1, * р2; /* два вказівники на дані 3 типом unsigned */
    long *q, h, w; /* q - вказівник, h і w - звичайні змінні */
    char c = 'q';
    pc = &c;
   // p1 = &c; Не можна
    std::cout << *pc;
    int а, *ра; /* а - змінна, ра - вказівник */
    ра = &а; /* nравильне присвоєння */
   // рс = &а; q = &а; /* nомилкові присвоєння */
    double z, *pz = &z; /* ініціалізація адресою змінної */

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