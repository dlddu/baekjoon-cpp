#include <iostream>

#define ¾ËÆÄºª°¹¼ö 26
#define BUFFER_LENGTH 100000

using namespace std;

int q1157()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int alphabet_count[¾ËÆÄºª°¹¼ö]{ 0 };
	char word[BUFFER_LENGTH];

	while (cin >> word)
	{
		for (int i = 0; i < BUFFER_LENGTH; i++)
		{
			if (word[i] == 0) break;
			alphabet_count[tolower(word[i]) - 'a']++;
		}
	}

	bool no_winner = false;
	int max = 0;
	int alphabet_index = 0;

	for (int i = 0; i < ¾ËÆÄºª°¹¼ö; i++)
	{
		if (alphabet_count[i] > max)
		{
			alphabet_index = i;
			max = alphabet_count[i];
			no_winner = false;
		}
		else if (alphabet_count[i] == max)
			no_winner = true;
	}

	if (no_winner)
		cout << '?';
	else
		cout << (char)(alphabet_index + 'A');

	return 0;
}