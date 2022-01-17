#include <iostream>
#include <set>
#include <string>

using namespace std;

int q1316()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, group_word_number = 0;
	string word;

	cin >> n;

	while (n--)
	{
		cin >> word;
		int index = 0;

		while (word.size() > 0)
		{
			char current_character = word[0];
			while (word[0] == current_character)
				word.erase(word.begin());

			if (word.find(current_character) != -1)
				break;
		}
		if (word.size() == 0)
			group_word_number++;
	}

	cout << group_word_number;

	return 0;
}