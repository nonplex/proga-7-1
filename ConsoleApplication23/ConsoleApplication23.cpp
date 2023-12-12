#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
//Лабораторная работа номер 7. Вариант 21, задание номер 1.
//Написать функцию f(x,y)
//вычисляющую входит ли начало координат в отрезок
//с заданными координатами и лежащий на оси OX. Если входит,
//то функция должна вернуть 1, иначе – 0.
using namespace std;
//Функции
int f_ret(int x, int x2, int y) {
    if ((x <= 0) && (x2 >= 0) && (y == 0))
        return 1;
    else
        if ((x >= 0) && (x2 <= 0) && (y == 0))
            return 1;
        else
            return 0;
}
void f_ykaz(int x, int x2, int y, int* r) {
    if ((x <= 0) && (x2 >= 0) && (y == 0))
        *r = 1;
    else
        if ((x >= 0) && (x2 <= 0) && (y == 0))
            *r = 1;
        else
            *r = 0;

}
void f_ssilk(int x, int x2, int y, int& ref) {
    if ((x <= 0) && (x2 >= 0) && (y == 0))
        ref = 1;
    else
        if ((x >= 0) && (x2 <= 0) && (y == 0))
            ref = 1;
        else
            ref = 0;
}

int main() {
    setlocale(LC_ALL, "ru");
    int x, x2, y, n;
    //ввод данных пользователем
    cout << "Введите Первую координату: ";
    cin >> x;
    cout << "Введите Вторую координату: ";
    cin >> x2;
    cout << "Введите координату y: ";
    cin >> y;


    //возвращение значения
    cout << "Выберете способ (1 - return, 2 - указатель, 3 - ссылка) ";
    cin >> n;
    int* r = new int;
    int res;
    int& ref = res;
    //реализация вариативности решения
    switch (n)
    {
    case 1:
        cout << f_ret(x, x2, y);
        break;
    case 2:
        f_ykaz(x, x2, y, r);
        cout << *r << endl;
        break;
    case 3:
        f_ssilk(x, x2, y, ref);
        cout << res;
        break;
    default:
        cout << "ошибка! Не допустимое значение ";
        return 1;
    }
    delete r;
}


