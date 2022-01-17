#include <iostream>
#include <cmath>

using namespace std;

int q1712()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int 고정비용, 가변비용, 판매수익;

	cin >> 고정비용 >> 가변비용 >> 판매수익;

	if (판매수익 <= 가변비용)
		cout << -1;
	else
	{
		double 판매갯수 = 고정비용 / (판매수익 - 가변비용);
		if (ceil(판매갯수) != 판매갯수)
			cout << (int)ceil(판매갯수);
		else
			cout << (int)ceil(판매갯수) + 1;
	}

	return 0;
}