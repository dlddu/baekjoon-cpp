#include <iostream>

using namespace std;

int q8393()
{
	int a;

	cin >> a;

	int sum = 0;

	for (int i = 1; i <= a; i++)
		sum += i;

	cout << sum;

	return 0;
}