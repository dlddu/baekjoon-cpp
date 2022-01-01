#include <iostream>
#include <set>

using namespace std;

int q1546()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, a;
	double max{ 0 }, sum{ 0 };

	cin >> N;
	int* b = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		b[i] = a;
		max = a > max ? a : max;
	}

	for (int i = 0; i < N; i++)
		sum += b[i] / max * 100;

	delete[] b;

	cout.precision(3);
	cout << fixed;
	cout << sum / N;

	return 0;
}