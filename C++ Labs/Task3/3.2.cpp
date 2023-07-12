#include <iostream>
using namespace std;


int main()
{
    const int n = 4;
    const int m = 6;
    int min_elem;
    int min_score = 0;
     int max_null =0;
     int max_null_sc = 0;
     int k = 0;
    //Ввід матриці 1
    int A[n][m] = {{2,4,5,0,7,8},{21,-10,3,0,-10,20},{4,25,-3,4,7,18},{0,1,0,3,7,-1}};
    //Вивід матриці 2
    /*
    int A[n][m];
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            cout << "Enter elem" << i << j << endl;
            cin >> A[i][j];
        }
    }*/
    //Пошук останнього мінімального елемента
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    min_elem = A[0][0];
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            if (A[i][j] < min_elem)
            {
                min_elem = A[i][j];
                min_score = j;
            }
            if (A[i][j] == min_elem)
            {
                min_score = j;
            }
        }
    }

    //Додатковий нульовий рядок
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            if (j == min_score + 1)
            {
                cout << 0 << " ";
            }
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //Кількість додатніх елементів в стовбці
    for (int j = 0;j < m;j++)
    {
        int d = 0;
        bool cheak = true;
        while (d < n)
        {
            if (A[d][j] < 0)
            {
                cheak = false;
                d++;
            }
            else
            {
                d++;
            }

        }
        if (cheak)
        {
            k++;
        }
    }
    k++;
    cout<<"k=" << k << endl;
    //Занулення стобця з найбільшою кількістю нулів
    for (int j = 0;j < m;j++)
    {
        int d = 0;
        int f = 0;
        while (d < n)
        {
            if (A[d][j] == 0)
            {
                f++;
                d++;
            }
            else
            {
                d++;
            }
            
        }
        if (f > max_null)
        {
            max_null = f;
            max_null_sc = j;
        }
    }
    for (int i = 0;i < n;i++)
    {
        A[i][max_null_sc] = 0;
    }
    
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < m;j++)
        {
            if (j == min_score + 1)
            {
                cout << 0 << " ";
            }
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}


