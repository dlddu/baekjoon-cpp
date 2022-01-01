#include <iostream>

using namespace std;

int q10818()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N, a, min = 1000000, max = -min;

	cin >> N;

	for (int _ = 0; _ < N; _++)
	{
		cin >> a;
		min = a < min ? a : min;
		max = a > max ? a : max;
	}
	cout << min << ' ' << max;

	return 0;
}