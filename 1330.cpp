#include <iostream>

using namespace std;

int q1330()
{
	int a, b;

	cin >> a >> b;

	if (a > b)
		cout << '>';
	if (a == b)
		cout << "==";
	if (a < b)
		cout << '<';

	return 0;
}