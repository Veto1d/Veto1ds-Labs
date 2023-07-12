#include <iostream>
using namespace std;

int main()
{

    const int n = 10;
    //Ввід матриці 1
    int A[n] = { 1, 7, 16, 25, 84, 32, 2, 64, 44, 400 };
    int B[n];
    int k=0;
    cout << "A=" << endl;
    for (int i = 0;i < n;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    //Ввід матриці 2
   /*for (int i = 0;i < n;i++)
    {
        cout << "Enter "  << "elem "  << i + 1 << endl;
        cin >> A[i];
    }*/
    //Перевірка елементів ,які є степення 2
    for (int i = 0;i < n;i++)
    {
        int d=1;
        while (d < A[i])
        {
            d = d * 2;

        }
        if (d == A[i])
        {
            B[k] = A[i];
            k++;
        }
       

    }
    cout << "B=" << endl;
    for (int i = 0;i < k;i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    int f = 0;
    for (int i = 0;i < n;i++)
    {
        bool cheak = true;
        for (int j = 0;j < k;j++)
        {
            if (A[i] == B[j])
            {
                cheak = false;
            }
        }
        if (cheak)
        {
            A[f] = A[i];
            f++;
        }
    }
    //пошук елемента останнього елемента який є степенем числа 5
    int g = 0;
    for (int i = f-1;i >= 0;i--)
    {
        int d = 1;
        while (d < A[i])
        {
            d = d * 5;

        }
        if (d == A[i])
        {
            g = i;
            break;
        }

    }
    //Видалення елемента який є степенем числа 5
    for (int i = f-1;i >=0;i--)
    {
        if (i == g)
        {
            while (i != f - 1)
            {
                A[i] = A[i + 1];
                i++;
            }
            break;
        }
    }
    f--;

    cout << "A1=" << endl;
    for (int i = 0;i < f;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    

    system("pause");
    return 0;
}
