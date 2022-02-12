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

	int 무거운거갯수 = n / 5;

	switch (n % 5)
	{
	case 0:
		cout << 무거운거갯수 + 0;
		break;
	case 1:
		cout << (무거운거갯수 - 1) + 2;
		break;
	case 2:
		cout << (무거운거갯수 - 2) + 4;
		break;
	case 3:
		cout << 무거운거갯수 + 1;
		break;
	case 4:
		cout << (무거운거갯수 - 1) + 3;
		break;
	}

	return 0;
}