#include <iostream>

using namespace std;

int q2292()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ��ǥ��, �ܰ� = 0, ���簪 = 1;

	cin >> ��ǥ��;

	while (true)
	{
		���簪 += 6 * �ܰ�++;

		if (���簪 >= ��ǥ��)
			break;
	}

	cout << �ܰ�;

	return 0;
}