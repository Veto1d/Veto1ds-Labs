#include<iostream>
using namespace std;

// заміна символів '...' на '.'

int main()
{
    
    char str[250]; 
    int i, j;
    char str2[250]; 
    int d;

    cout << "Enter string" << endl;
    gets_s(str);  


    j = 0; 
    d = strlen(str); 

    for (i = 0; i < d; i++)
        if (i < d - 2)
        {
            if ((str[i] == '.') && (str[i + 1] == '.') && (str[i + 2] == '.'))
            {
                str2[j++] = '.';
                i += 2;
            }
            else
            {
                str2[j++] = str[i];
            }
        }
        else
        {
            str2[j++] = str[i];
        }

    str2[j] = '\0';
    for (i = 0; i < strlen(str2); i++)
    {
        cout << str2[i];
    }
    return 0;
}