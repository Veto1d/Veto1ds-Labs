#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    const int m = 6;
    int a[n][m];
    //Задаємо рандомні числа в матрицю
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            a[i][j] = rand() % 20;
        }
    }
    cout << "Begining Array" << endl;
    //Знаходимо мінімальний і максимальний елемент
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int max_el = a[0][0];
    int min_el = a[0][0];
    int max_row = 0;
    int min_row = 0;
    int max_cols = 0;
    int min_cols = 0;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            if (a[i][j] > max_el)
            {
                max_el = a[i][j];
                max_row = i;
                max_cols = j;
            }
            if (a[i][j] < min_el)
            {
                min_el = a[i][j];
                min_row = i;
                min_cols = j;
            }
        }
    }
    cout << "min_el=" << min_el << endl;
    cout << "max_el=" << max_el << endl;
    //Міняємо їх місцями
    swap(a[max_row][max_cols], a[min_row][min_cols]);
    cout << "Sorted Array" << endl;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



    system("pause");
    return 0;


}
