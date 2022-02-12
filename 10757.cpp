#include <iostream>
#include <string>

using namespace std;

int q10757()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b;
	int 받아올림{ 0 }, 일의자리{ 0 }, i;

	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	for (i = 0; i < b.length(); i++)
	{
		if (i < a.length())
		{
			일의자리 = a[i] - 48 + b[i] - 48 + 받아올림;
			받아올림 = 일의자리 / 10;
			일의자리 %= 10;

			a[i] = 일의자리 + 48;
		}
		else
		{
			일의자리 = b[i] - 48 + 받아올림;
			받아올림 = 일의자리 / 10;
			일의자리 %= 10;

			a += (char)(일의자리 + 48);
		}
	}
	for (; i < a.length(); i++)
	{
		일의자리 = a[i] - 48 + 받아올림;
		받아올림 = 일의자리 / 10;
		일의자리 %= 10;

		a[i] = 일의자리 + 48;
	}
	if (받아올림 > 0)
		a += (char)(받아올림 + 48);

	reverse(a.begin(), a.end());
	cout << a;

	return 0;
}