#include <iostream>
#include <string>

#define MODE 1
using namespace std;

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
        int add = x + y;
        cout << endl << "Результат сложения: " << add;
#else 
    cout << "Неизвестный режим. Завершение работы" << endl;
#endif
}
