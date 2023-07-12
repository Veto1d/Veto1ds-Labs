#include "Header.h"

int main()
{
    ifstream in("Text.txt");
   const int n = 3;
    Dish* dishes = new Dish[n];
    int k = 0;
    while (!in.eof())
    {
        in >> dishes[k];
        k++;
    }
    for (int i = 0;i < k;i++)
    {
        cout << dishes[k];
    }

    system("pause");
    return 0;
}

