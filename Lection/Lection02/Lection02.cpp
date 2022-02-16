// Lection02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
long factorial(int number);
int main()
{
    setlocale(LC_CTYPE, "ukr");
    std::cout << "Hello World!\n";

    // визначення парності числа
    //int numb;
    //std::cin >> numb;
    //if (numb % 2 == 0)
    //    puts("Число парне");
    //else
    //    puts("Число непарне");

    //if (numb % 2)
    //    puts("Число непарне");
    //else
    //    puts("Число парне");


    // максимум з двох чисел
  /*  int a, b;
    std::cin >> a;
    std::cin >> b;
    int max = b;
    if (a > b)
        max = a;

    std::cout << "max = " << max;*/


    // Тернарна операція
    //int a, b;
    //std::cin >> a;
    //std::cin >> b;
    //int max;
    //max = (a > b) ? a : b;
    //std::cout << "max = " << max;

    // Мінімум з 3 чисел
 //       int a, b, c;
 //   std::cin >> a;
 //   std::cin >> b;
 //   std::cin >> c;
 //   int min;
 //   if (a < b)
 //       if (a < c)
 //           min = a;
 //       else
 //           min = c;
 //   else
 //       if (b < c)
 //           min = b;
 //       else
 //           min = c;
	//std::cout << "min = " << min;

    // Мінімум з 3 чисел
    //int a, b, c;
    //std::cin >> a;
    //std::cin >> b;
    //std::cin >> c;
    //int min;
    //if ((a < b) && (a < c))
    //    min = a;      
    //else
    //    if ((b < c) && (b<a))
    //        min = b;
    //    else
    //        min = c;
    //std::cout << "min = " << min;

    // підрахунок чисел -1, 0, 1
 /*   int n = 0, z = 0, p = 0, q = 0;
    int a;
    for (int i = 0; i < 10; i++)
    {
        std::cin >> a;
        switch (a)
        {
        case -1: n++; break;
        case 0: z++; break;
        case 1: p++; break;
        default: q++;
        }
    }
    std::cout << "к-ть -1 = " << n;
    std::cout << "к-ть 0 = " << z;
    std::cout << "к-ть 1 = " << p;
    std::cout << "к-ть інших = " << q;*/

    // Цикли. Виведення на екран всіх парних чисел від 500 до 0
  /*  long i;
    for (i = 500; i >= 0; printf("\n%ld", i), i -= 2);*/
    
    //for (int i = 98; i >= 10; i -= 2)
    //{
    //    printf("\nПарне число:");
    //  //  continue;
    //    printf("%ld", i);        
    //}
    //for (int i = 98; i >= 10; i--)
    //    if (i % 2 == 1)
    //        continue;
    //    else
    //        printf("\n %ld", i);

    // Піраміда
    //#define RМАХ 10 /* висота піраміди */
    //int row, left, right, pos;
    //for (row = 1, left = right = RМАХ; row <= RМАХ; left--, right++, row++) {
    //    for (pos = 1; pos < left; pos++)
    //        putchar(' ');
    //    for (; pos <= right; pos++)
    //        putchar((char)'A' + row - 1);
    //    putchar('\n');
    //}
    
    // Табличка Піфагора
    //for (int i = 1; i <= 10; i++)
    //{
    //    for (int j = 1; j <= 10; j++)
    //        std::cout << i * j << "   ";
    //    std::cout << std::endl;
    //}

    // Опитування

    //char ch;
    //printf("Підтверджуєте, що будете відвудувати всі пари? Так чи ні ?(y/n); ");
    //std::cin >> ch;
    //while ((ch != 'y'))
    //{
    //    std::cout << "Відповідайте так чи ні . . (y / n)";
    //    std::cin >> ch;
    //}
    //std::cout << "Молодець";

// Опитування2

    char ch;
    printf("Підтверджуєте, що будете відвудувати всі пари? ");
   
    
    do
    {
        std::cout << "Відповідайте так чи ні . . (y / n)";
        std::cin >> ch;
    }
    while ((ch != 'y'));
    return 0;
    std::cout << "Молодець";

    // Факторіал
    /*int number;
    std::cout << "Введіть число: ";
    std::cin >> number;

    long R = factorial(number);
    std::cout << number << "!=" << R;*/
}

//5 != 5 * 4 * 3 * 2 * 1
long factorial(int number) {
    long total;
    total = number;
    while (--number)
        total *= number;
    return total;
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
