#include <iostream>
#include <string>

using namespace std;

int q8958()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string ox;

	cin >> n;

	while (n--)
	{
		cin >> ox;

		int score{ 0 }, accumelated_number{ 0 };
		for (int i = 0; i < ox.size(); i++)
		{
			if (ox[i] == 'O')
				score += ++accumelated_number;
			else
				accumelated_number = 0;
		}

		cout << score << '\n';
	}

	return 0;
}