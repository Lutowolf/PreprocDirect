#include <iostream>
#include <string>

#define MODE 1
using namespace std;

int sum(int x, int y)
{
    int add = x + y;
    return add;
}

int main()
{
    setlocale(LC_ALL, "Russian");
#if MODE == 0
        cout << "Работаю в режиме тренировки" << endl;
#elif MODE == 1
        cout << "Работаю в боевом режиме" <<  endl;
        cout << "введите число 1: ";
        int x, y;
        cin >> x;
        cout << endl << "введите число 2: ";
        cin >> y;
        cout << endl << "Результат сложения: " << sum(x, y);
#else 
#error "Неизвестный режим. Завершение работы"
#endif
}
