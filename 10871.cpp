#include <iostream>
#include <iomanip>

using namespace std;

int q10871()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N, X, a;

	cin >> N >> X;

	for (int i = 1; i <= N; i++)
	{
		cin >> a;
		if (a < X)
			cout << a << ' ';
	}

	return 0;
}