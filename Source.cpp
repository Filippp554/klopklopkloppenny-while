#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;

	cout << "zadaj prve cislo" << endl;
	cin >> x;
	cout << "zadaj posledne cislo" << endl;
	cin >> y;

	do
	{
		cout << ++x << endl;
		x++;

	} while (x <= y);
}