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

		int 剪葬 = (n - 1) / h;
		int 類 = n % h;
		if (類 == 0) 類 = h;

		cout << 類 << setw(2) << setfill('0') << 剪葬 + 1 << '\n';
	}

	return 0;
}