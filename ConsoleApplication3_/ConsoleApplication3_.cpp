
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(0, "");
    const unsigned int Strocki = 3;
    const unsigned int Elements = 5;
    float ary[Strocki][Elements];

    for (int i = 0; i < Strocki; i++) {
        cout << "Введите числа для вычесления " << i + 1 << ":" << endl;
        for (int j = 0; j < Elements; j++) {
            cin >> ary[i][j];
        }

    }

    for (int i = 0; i < Strocki; i++) {
        float sum = 0;
        for (int j = 0; j < Elements; j++) {
            sum += ary[i][j];

        }

        float res = sum / Elements;
        cout << "Среднее арифметическое чисел равно: " << i + 1 << res << endl;

    }

    return 0;





}
