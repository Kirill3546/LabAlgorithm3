#include <iostream>
using namespace std;
void task1() {
    //  Написати програму.Дано три цілих числа.Вибрати з них ті, які належать інтервалу[1, №].Де № - остання цифра порядкового номеру у списку групи.

    int a = 1, b = 5, c = 17;
    int N = 3;
    if (a <= N && a >= 1) {
        cout << a << " ";
    }
    if (b <= N && b >= 1) {
        cout << b << " ";
    }
    if (c <= N && c >= 1) {
        cout << c;
    }
}
void task2() {
    //  Написати програму.Дано 3 числа.Знайти мінімальне серед них і вивести на екран. (Для № - парного).Знайти максимальне серед них і вивести на екран. (Для № - непарного).
    float a = 4.2, b = 3.14, c = 6.9;
    if (a > b && a > c) {
        cout << a;
    }
    if (b > a && b > c) {
        cout << b;
    }
    if (c > a && c > b) {
        cout << c;
    }
}
void task3() {
    //  Написати програму.Знайти суму n елементів наступного ряду чисел : 1 - 0.5 0.25 - 0.125 ... n.Кількість елементів(n) вводиться з клавіатури.Вивести на екран кожен член ряду і його суму.Вирішити задачу використовуючи циклічну конструкцію for.
    int N;
    cin >> N;
    double e = 1;
    double Se = 0;
    for (int i = 0; i < N; i++) {

        cout << e << " ";
        Se += e;
        e /= -2;
    }

    cout << Se;
}
void task4() {
    //  Написати програму.Дано ціле число, що не менше 2. Виведіть його найменший натуральний дільник, відмінний від 1 Вирішити задачу використовуючи циклічну конструкцію while. (У циклі while в якості логічного виразу використовується команда n% i порівнювана з нулем.)
    int N = 3;
    int i = 2;
    while (N % i != 0)
    {
        i++;
    }
    cout << i;
}
void task5() {

    //  Написати програму.Написати програму.Програма має вивести ряд послідовності Фібоначчі.Кожен наступний член дорівнюється суммі двох попередніх.

    int first = 0, second = 1, fibonachi;
    int n = 10;

    for (int i = 0; i < n; ++i)
    {
        if (i <= 1)
            fibonachi = i;
        else
        {
            fibonachi = first + second;
            first = second;
            second = fibonachi;
        }
        cout << fibonachi << " ";
    }
    cout << endl;
}
void task6() {
    int rnum = 1 + rand() % 20;
    for (int i = 1; true; i++)
    {
        int guess;
        cout << "Quess: ";
        cin >> guess;

        if (guess <= 0 || guess >= 21)
        {
            cout << "Error 404" << endl;
            i--;
            continue;
        }
        if (guess == rnum)
        {
            cout << "Win" << endl << " ..." << i << " attempt";
            break;
        }
        else
        {
            cout << "Wrong!";
            if (guess > rnum)
            {
                cout << endl << " Try a smaller number" << endl;
            }
            else
            {
                cout << endl << " Try a bigger number" << endl;
            }
        }
    }
}

int main()
{
    task4();
}
