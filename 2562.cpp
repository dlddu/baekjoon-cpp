#include <iostream>

using namespace std;

int q2562()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a, max{ 1 }, position;

	for (int i = 0; i < 9; i++)
	{
		cin >> a;
		if (a > max)
		{
			max = a;
			position = i + 1;
		}
	}
	cout << max << '\n' << position;

	return 0;
}