#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // русская локализация консоли
    double x, y, z, res;          // задаем переменные
    // res - ответ на задачу
    cout << "Введите x, y и z: ";
    cin >> x >> y >> z; // считываем переменные
    res = ((1 + log(fabs(x + z))) * z) / (abs(sqrt(x) + y / (pow(x, 2) + 4)));
    cout << "Значение выражения равно: ";
    cout << res; // печатаем ответ
    return 0;
}