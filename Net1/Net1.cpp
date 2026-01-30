#include <iostream>
#define MODE 1
#ifndef MODE
#error Нужно определить MODE
#endif 
#if MODE==1
int add(int a, int b)
{
    return a + b;
}
#endif

int main()
{
    setlocale(LC_ALL, "Rus");
#if MODE==0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE==1
    std::cout << "Работаю в боевом режиме" << std::endl;
    int num1, num2;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения: " << add(num1, num2) << std::endl;
#else
#error Invalid number
#endif
}

