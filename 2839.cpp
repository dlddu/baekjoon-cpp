#include <iostream>

using namespace std;

int q2839()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	if (n == 4 || n == 7)
	{
		cout << -1;
		return 0;
	}

	int ���ſ�Ű��� = n / 5;

	switch (n % 5)
	{
	case 0:
		cout << ���ſ�Ű��� + 0;
		break;
	case 1:
		cout << (���ſ�Ű��� - 1) + 2;
		break;
	case 2:
		cout << (���ſ�Ű��� - 2) + 4;
		break;
	case 3:
		cout << ���ſ�Ű��� + 1;
		break;
	case 4:
		cout << (���ſ�Ű��� - 1) + 3;
		break;
	}

	return 0;
}