#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

void book()
{
    int x, y=0,b;
	string a, c;
	Book Voina;

	while (y == 0)
	{
		cout << "Click 1 to set book parametrs \nClick 2 to print book parametrs  \n " << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			cout << "Include Author | CountPage | Book Name" << endl;
			cin >> a; cin >> b; cin >> c;
			if (b < 0)
			{
				cout << "Wrong number in CountPage\n";
				break;
			}

			Voina.Set_Author(a); Voina.Set_CountPage(b); Voina.Set_Book_Name(c);

			break;
		case 2:

			Voina.Print();

			break;
		default:
			cout << "EROR - Wrong number " << endl;;
			break;
		}
		cout << " Include 0 to Continue And Any Number to end work" << endl;
		cin >> y;
	}
}

int main()
{
	book();
	return 0;
}
