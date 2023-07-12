#include <iostream>
using namespace std;


int main()
{
    const int n = 10;
    int j = n-1;
    int b = 0;
    int a[n];
    //Заповнюємо стрічку
    for (int i = 0;i < n;i++)
    {
        a[i] = rand() % 11;
    }
    cout << "Begining array" << endl;
    for (int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    //Міняємо місцями елементи
    for (int i = 0;i < n / 2;i++)
    {
        b = a[i];
        a[i] = a[j - i];
        a[j - i] = b;

    }
    cout << "Sorted Array" << endl;
    for (int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;

}

