#include <iostream>
#include <cmath>

using namespace std;

int q1712()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int �������, �������, �Ǹż���;

	cin >> ������� >> ������� >> �Ǹż���;

	if (�Ǹż��� <= �������)
		cout << -1;
	else
	{
		double �ǸŰ��� = ������� / (�Ǹż��� - �������);
		if (ceil(�ǸŰ���) != �ǸŰ���)
			cout << (int)ceil(�ǸŰ���);
		else
			cout << (int)ceil(�ǸŰ���) + 1;
	}

	return 0;
}