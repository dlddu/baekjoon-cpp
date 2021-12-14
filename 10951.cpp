#include <iostream>

using namespace std;

int q10951()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a, b;

	while (true)
	{
		cin >> a >> b;
		if (cin.eof())break;
		cout << a + b << '\n';
	}

	return 0;
}