#include <iostream>
#include <iomanip>

using namespace std;

int q10250()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, h, w, n;

	cin >> t;

	while (t--)
	{
		cin >> h >> w >> n;

		int �Ÿ� = (n - 1) / h;
		int �� = n % h;
		if (�� == 0) �� = h;

		cout << �� << setw(2) << setfill('0') << �Ÿ� + 1 << '\n';
	}

	return 0;
}