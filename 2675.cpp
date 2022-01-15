#include <iostream>
#include <string>

using namespace std;

int q2675()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	while (n--)
	{
		int number_to_iterate;
		string word;

		cin >> number_to_iterate >> word;

		for (char character : word)
		{
			for (int _ = 0; _ < number_to_iterate; _++)
				cout << character;
		}
		cout << '\n';
	}

	return 0;
}