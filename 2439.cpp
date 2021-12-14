#include <iostream>
#include <iomanip>

using namespace std;

int q2439()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a;

	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		cout << setw(a - i + 1);
		for (int j = 1; j <= i; j++)
			cout << '*';
		cout << '\n';
	}

	return 0;
}