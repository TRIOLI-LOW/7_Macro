#include <iostream>
#include <Windows.h>
#define MODE 1 
#if defined (MODE) 

int add(int a,int  b) {
	return a + b;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a(0); int b(0);

#if MODE == 0 
	std::cout << "Работаю в режиме тренировки";
#elif MODE == 1
	std::cout << "Работаю в боевом режиме: " << std::endl;
	std::cout << " Введите число 1: ";
	std::cin >> a;
	std::cout << " Введите число 2: ";
	std::cin >> b;
	std::cout << "Результат сложения: " << add(a, b);
#else 
	std::cout << "Неизвестный режим. Завершение работы!";


#endif
#endif
#if !defined (MODE)
	std::cout << "Error!";
#endif
}
