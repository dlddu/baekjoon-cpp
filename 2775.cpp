#include <iostream>

using namespace std;

int q2775()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, k, n;

	cin >> t;

	int ����Ʈ[15][14];

	for (int ȣ = 1; ȣ <= 14; ȣ++)
		����Ʈ[0][ȣ - 1] = ȣ;

	for (int �� = 1; �� <= 14; ��++)
	{
		for (int ȣ = 1; ȣ <= 14; ȣ++)
		{
			if (ȣ == 1)
				����Ʈ[��][ȣ - 1] = 1;
			else
				����Ʈ[��][ȣ - 1] = ����Ʈ[�� - 1][ȣ - 1] + ����Ʈ[��][ȣ - 2];
		}
	}

	while (t--)
	{
		cin >> k >> n;
		cout << ����Ʈ[k][n - 1] << '\n';
	}

	return 0;
}