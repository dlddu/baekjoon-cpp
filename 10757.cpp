#include <iostream>
#include <string>

using namespace std;

int q10757()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b;
	int �޾ƿø�{ 0 }, �����ڸ�{ 0 }, i;

	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	for (i = 0; i < b.length(); i++)
	{
		if (i < a.length())
		{
			�����ڸ� = a[i] - 48 + b[i] - 48 + �޾ƿø�;
			�޾ƿø� = �����ڸ� / 10;
			�����ڸ� %= 10;

			a[i] = �����ڸ� + 48;
		}
		else
		{
			�����ڸ� = b[i] - 48 + �޾ƿø�;
			�޾ƿø� = �����ڸ� / 10;
			�����ڸ� %= 10;

			a += (char)(�����ڸ� + 48);
		}
	}
	for (; i < a.length(); i++)
	{
		�����ڸ� = a[i] - 48 + �޾ƿø�;
		�޾ƿø� = �����ڸ� / 10;
		�����ڸ� %= 10;

		a[i] = �����ڸ� + 48;
	}
	if (�޾ƿø� > 0)
		a += (char)(�޾ƿø� + 48);

	reverse(a.begin(), a.end());
	cout << a;

	return 0;
}