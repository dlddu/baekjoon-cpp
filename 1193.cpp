#include <iostream>

using namespace std;

int q1193()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int 목표값, 단계 = 1, 현재값 = 0;

	cin >> 목표값;

	while (true)
	{
		if (현재값 + 단계 >= 목표값)
			break;

		현재값 += 단계++;
	}

	int 몇번째 = 목표값 - 현재값;

	if (단계 % 2 == 0)
		cout << 몇번째 << '/' << 단계 - 몇번째 + 1;
	else
		cout << 단계 - 몇번째 + 1 << '/' << 몇번째;

	return 0;
}