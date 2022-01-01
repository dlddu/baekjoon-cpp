#include <iostream>

using namespace std;

int q1110()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int originalN, N, i = 0, a, b;

	cin >> originalN;
	N = originalN;

	while (true)
	{
		i++;

		a = N / 10;
		b = N % 10;
		N = b * 10 + ((a + b) % 10);
		if (N == originalN) break;
	}
	cout << i;

	return 0;
}