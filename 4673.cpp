#include <iostream>
#include <set>

using namespace std;

void get_self_number(int n, bool* not_self_number)
{
	if (not_self_number[n - 1] || n > 10000) return;

	int sum = n;
	int mod = n;

	while (mod > 0)
	{
		sum += mod % 10;
		mod = mod / 10;
	}

	if (n != sum)
	{
		get_self_number(sum, not_self_number);
		if (sum <= 10000) not_self_number[sum - 1] = true;
	}
}

int q4673()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	bool not_self_number[10000]{ false };

	for (int i = 1; i <= 10000; i++)
	{
		if (not_self_number[i - 1]) continue;
		get_self_number(i, not_self_number);
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (!not_self_number[i - 1])
			cout << i << '\n';
	}

	return 0;
}