#include <iostream>

using namespace std;

int q2292()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int 목표값, 단계 = 0, 현재값 = 1;

	cin >> 목표값;

	while (true)
	{
		현재값 += 6 * 단계++;

		if (현재값 >= 목표값)
			break;
	}

	cout << 단계;

	return 0;
}