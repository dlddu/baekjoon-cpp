#include <iostream>

using namespace std;

int q1193()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ��ǥ��, �ܰ� = 1, ���簪 = 0;

	cin >> ��ǥ��;

	while (true)
	{
		if (���簪 + �ܰ� >= ��ǥ��)
			break;

		���簪 += �ܰ�++;
	}

	int ���° = ��ǥ�� - ���簪;

	if (�ܰ� % 2 == 0)
		cout << ���° << '/' << �ܰ� - ���° + 1;
	else
		cout << �ܰ� - ���° + 1 << '/' << ���°;

	return 0;
}