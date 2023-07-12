#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    cout << "enter k" << endl;
    cin >> k;
    int f = 0;
    int d = 0;
    int n = 0;
    while (f < k)
    {
        d++;
        int j = d * d;
        while (j > 0)
        {
            j = j / 10;
            f++;
        }
        
    }
    d = d * d;
    f = f - k;
    while (f >= 0)
    {
        n = d % 10;
        d = d / 10;
        f--;
    }
    cout <<"num=" << n << endl;
    system("pause");
    return 0;
}

