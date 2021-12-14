#include <iostream>

using namespace std;

int q2742()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a;

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cout << a - i << "\n";
	}

	return 0;
}