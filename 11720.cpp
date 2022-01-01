#include <iostream>
#include <string>

using namespace std;

int q11720()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, sum{ 0 };
	char digit;

	cin >> n;

	while (n--)
	{
		cin >> digit;
		sum += digit - '0';
	}
	cout << sum;

	return 0;
}