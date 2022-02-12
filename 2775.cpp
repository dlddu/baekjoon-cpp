#include <iostream>

using namespace std;

int q2775()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, k, n;

	cin >> t;

	int 아파트[15][14];

	for (int 호 = 1; 호 <= 14; 호++)
		아파트[0][호 - 1] = 호;

	for (int 층 = 1; 층 <= 14; 층++)
	{
		for (int 호 = 1; 호 <= 14; 호++)
		{
			if (호 == 1)
				아파트[층][호 - 1] = 1;
			else
				아파트[층][호 - 1] = 아파트[층 - 1][호 - 1] + 아파트[층][호 - 2];
		}
	}

	while (t--)
	{
		cin >> k >> n;
		cout << 아파트[k][n - 1] << '\n';
	}

	return 0;
}