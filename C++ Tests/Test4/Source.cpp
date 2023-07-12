#include <iostream>
#include <string>
#include "Forward_List.h"
using namespace std;

int main()
{
	/*ifstream fin("List.txt");
	Forward_List List(fin);
	cout << "Normal list" << endl;
	List.Print(cout);
	cout << endl;

    cout << "Add to begin and end" << endl;
    List.PushUp(-10);
    List.PushUp(-20);
    List.PushBack(-15);
    List.PushBack(-41);
    List.Print(cout);
    cout << endl;

    cout << "Remove elements" << endl;
    List.PopUp();
    List.PopBack();
    List.Print(cout);
    cout << endl;

    cout << "List is empty" << endl;
    List.Is_Empty();
    cout << endl;

    cout << "After negative elements" << endl;
    List.AddAfterNegative(-10);
    List.Print(cout);
    List.PushUp(15);
    List.PushBack(17);
    List.Print(cout);
    List.PopUp();
    List.PopBack();
    List.Print(cout);
    cout << endl;

    cout << "UniqElements" << endl;
    List.UniqElement();
    List.Print(cout);*/

    ifstream fin("Text.txt");
    int n = 0;
    Forward_List List(fin);
    List << cout;
    List.Reverse();
    List.Swapelem();
    List << cout;


	system("pause");
	return 0;
}