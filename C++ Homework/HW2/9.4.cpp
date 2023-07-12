#include<iostream>
using namespace std;
int main()
{
    char str[250];
    cout << "Enter string" << endl;
    gets_s(str);
    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] == 'W')
        {
            while (str[i] != ' ' && i < strlen(str))
            {
                cout << str[i]; i++;
            }
            cout << endl;
        }
        if (str[i] == 'w' && str[i - 1] == ' ')
        {
            while (str[i] != ' ' && i < strlen(str))
            {
                cout << str[i]; i++;
            }
            cout << endl;
        }
    }
}