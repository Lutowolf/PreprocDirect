#include <iostream>
#include <string>

#define MODE 1
using namespace std;

#if MODE == 1
int sum(int x, int y)
{
    int add = x + y;
    return add;
}
#endif

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
#elif MODE > 1 
#error "Неизвестный режим. Завершение работы"
#else
#error "Констатнта MODE не определена. Введите значение MODE."
#endif
}
