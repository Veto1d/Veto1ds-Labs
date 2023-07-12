#include <iostream>
using namespace std;

/*
Обчислити кількість  знаків пунктуації, які містяться у тексті.
*/

int main()
{
    char str[250]; 
    int d;
    cout << "Enter string" << endl;
    gets_s(str);  
    int count = 0;   
    d = strlen(str);

    for (int i = 0; i < d; i++)
    {
        if (str[i] == '.' || str[i] == ',' || str[i] == ':' || str[i] == '!' || str[i] == ';' || str[i] == '?' || str[i] == '-')
            count++;
    }
    cout << count;

    return 0;
}