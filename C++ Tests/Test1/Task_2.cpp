#include <iostream>
using namespace std;


int main()
{
    
    const int n = 5;
    int a[n];
    bool t = false;
    //Записуємо в масив потрібні ман числа
    for (int i = 0;i < n;i++)
    {
        cout << "elem" << i + 1 << endl;
        cin >> a[i];
    }
    cout<<"Entered array"<<endl;
    for (int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0;i < n;i++)
    {
        if (a[i] < 0)
        {
            t = true;
        }
    }
    //Виводимо повідомлення
    if (t)
    {
        cout << "Array have negative elements" << endl;
    }
    else
    {
        cout << "Array don't have negative elements" << endl;

    }



    system("pause");
    return 0;
    
}
