#include <iostream>
#include <iomanip>

using namespace std;

int q10952()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a, b;

	while (true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cout << a + b << '\n';
	}

	return 0;
}