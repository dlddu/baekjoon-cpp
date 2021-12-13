#include <iostream>

using namespace std;

int q10430()
{
	int a, b, c;

	cin >> a >> b >> c;

	cout << (a + b) % c << endl
		<< ((a % c) + (b % c)) % c << endl
		<< (a * b) % c << endl
		<< ((a % c) * (b % c)) % c;

	return 0;
}