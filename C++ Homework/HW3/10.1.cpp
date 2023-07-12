#include <iostream>
#include <string>
using namespace std;

/* 10.1	Дано дві різні години (тип- struct). Завдання: правильно їх додати. */

struct clock
{

    int hour = 0;
    int minutes = 0;
    int seconds = 0;
    clock()
    {
        hour = 12;
        minutes = 0;
        seconds = 0;
    }
    clock(int h, int m, int s)
    {
        hour = h;
        minutes = m;
        seconds = s;
    }
};

void sum(clock A, clock B)
{
    int a = 0;
    int s = 0;
    int m = 0;
    int h = 0;
    s = A.seconds + B.seconds;
    if (s >= 60)
    {
        a = s / 60;
        s = s % 60;
    }

    m = A.minutes + B.minutes + a;
    if (m >= 60)
    {
        a = m / 60;
        m = m % 60;
    }

    h = A.hour + B.hour + a;
    if (h >= 24)
    {
        h = h % 24;
    }

    clock C(h, m, s);
    cout << C.hour << "." << C.minutes << "." << C.seconds << endl;

}

int main()
{
    clock A(12,2,2);
    clock B(4, 59, 23);
    sum(A, B);
    
    system("pause");
    return 0;
}