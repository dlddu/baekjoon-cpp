#include <iostream>
#include <string>

using namespace std;

int q1152()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char word[10000];
	bool space_appeared{ false }, is_first_word{ true };
	int word_number{ 0 };

	while (true)
	{
		cin.getline(word, sizeof(word));
		if (word[0] == 0) break;

		for (int i = 0; i < sizeof(word) / sizeof(word[0]); i++)
		{
			if (word[i] == 0) break;
			if (word[i] == ' ') space_appeared = true;
			else if (word[i] != ' ' && (space_appeared || is_first_word))
			{
				word_number++;
				is_first_word = false;
				space_appeared = false;
			}
		}
		cin.clear();
	}

	cout << word_number;

	return 0;
}